import axios from 'axios';
import config from '../config/config';
import { API_KEY, ProblemInfo } from '../../types';
import cheerio from 'cheerio';
import fs from 'fs';
import {findSourceCode} from '../task/submit_code';
import FormData from "form-data";
import dotenv from "dotenv";

dotenv.config();

const GET = (endpoint: API_KEY, debug = false, page = 1) => {
    if(debug) console.log(`GET ${config.api.host}${config.api[endpoint]}?page=${page}`);
    return axios.get(`${config.api.host}${config.api[endpoint]}?page=${page}`, {
        headers: {
            Cookie: config.api.COOKIE
        }
    });
}

export enum submitStatus{
    SUCCESS,
    FAILED,
    NOT_FOUND
}

const submitCode = async(problemCode: string): Promise<submitStatus> => {
    const api = `${config.api.host}/student/solution`;
    const formData = new FormData();
    const sourceCodeName = findSourceCode(problemCode);
    if(!sourceCodeName){
        //red color
        console.log("\x1b[31m%s\x1b[0m",`Source code not found!`);
        return submitStatus.NOT_FOUND;
    }

    const sourceCode = fs.createReadStream(`${__dirname}/../../resources/code/${sourceCodeName}`);
    formData.append('_token', process.env.CSRF_TOKEN!);
    formData.append('question', problemCode!);
    formData.append('code_file', sourceCode, 'code_file.cpp');
    formData.append('compiler', '2');

    const result = await axios.post(api,formData,{
        headers: {
            Cookie: config.api.COOKIE,
            "Content-Type": "multipart/form-data",
}});
    if(result.status === 200){
        //green color
        console.log("\x1b[32m%s\x1b[0m",`Submit code success!`);
        return submitStatus.SUCCESS;
    }else{
        //red color
        console.log("\x1b[31m%s\x1b[0m",`Submit code failed!`);
        return submitStatus.FAILED;
    }
}


const getQuestionsInPage = async(page: number) => {
    const res = await GET('FETCH_QUESTION',false,page);
    const complete_question_list: ProblemInfo[] = [];
    const incomplete_question_list: ProblemInfo[] = [];
    const $ = cheerio.load(res.data); 
    const questions_table = $('.status .ques__table__wrapper table.ques__table tbody');
    //write html to file
    const completed_question_html = questions_table.find('tr').map((i, el) =>{
        const element = $(el);
        let problemName = element.find('td:nth-child(4)').text();
        const problemLink = element.find('td:nth-child(4) a').attr('href');
        let problemID = element.find('td:nth-child(3)').text();
        problemID = problemID.replace(/^\s+|\s+$/g, '');
        const problemTopic = element.find('td:nth-child(6)').text();
        const problemDifficulty = element.find('td:nth-child(7)').text();

        problemName = problemName.replace(/^\s+|\s+$/g, '');
        if(element.hasClass('bg--10th')){
            complete_question_list.push(new ProblemInfo(
                problemName,
                problemLink!,
                problemID,
                "Complete",
                problemTopic,
                problemDifficulty
            ));
        }else{
            incomplete_question_list.push(new ProblemInfo(
                problemName,
                problemLink!,
                problemID,
                "Incomplete",
                problemTopic,
                problemDifficulty
            ));
        }
    });
    return {
        complete_question_list, 
        incomplete_question_list
    }
}

export {GET, getQuestionsInPage, submitCode}