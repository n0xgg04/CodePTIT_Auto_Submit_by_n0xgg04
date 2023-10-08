import {getQuestionsInPage, submitCode, submitStatus} from "./common/api";
import _ from "lodash";
import { ProblemInfo } from "./types";
import dotenv from "dotenv";
import fs from "fs";
import delay from "./common/utils/delay";
import check_env from "./common/utils/check_env";

dotenv.config();

//------------------------- CONFIG ---------------------------------
const limit_task: number = Number(process.env.LIMIT_TASK) || 28; //limit task
let count_task: number = Number(process.env.INIT_COUNT) || 1; //count task
const delay_low = Number(process.env.DELAY_LOW) ||  5 ; //minutes
const delay_high = Number(process.env.DELAY_HIGH) ||  7; //minutes
//-------------------------------------------------------------------

Promise.all([1,2,3].map((page) => getQuestionsInPage(page))).then(async(res) => {
    check_env();
    const problems = res.map((page) => [...page.incomplete_question_list, ...page.complete_question_list]);
    let problemArray: ProblemInfo[] = _.flatten(problems);
    problemArray = _.uniqBy(problemArray, (problem) => problem.problemID);
    const incomplete_question_list = problemArray.filter((problem) => problem.problemStatus === "Incomplete");
    const complete_question_list = problemArray.filter((problem) => problem.problemStatus === "Complete");
    fs.writeFileSync(`${__dirname}/cache/incomplete_question_list.json`, JSON.stringify(incomplete_question_list, null, 4));
    fs.writeFileSync(`${__dirname}/cache/complete_question_list.json`, JSON.stringify(complete_question_list, null, 4));
    //clear console
    console.clear();
    console.log("\x1b[32m%s\x1b[0m",`Login success!`);
    console.log("> Total problems: ", problemArray.length);
    console.log("> Incomplete problems: ", incomplete_question_list.length);
    console.log("> Complete problems: ", complete_question_list.length);

    await delay(1000);
    console.log("\x1b[34m%s\x1b[0m",`Start auto submit code! Delay: ${delay_low} - ${delay_high} minutes`);
    while(count_task < limit_task){
        //get random incomplete problem
        const randomIndex = Math.floor(Math.random() * incomplete_question_list.length);
        const randomProblemID = incomplete_question_list[randomIndex].problemID;
        const randomProblemName = incomplete_question_list[randomIndex].problemName;

        console.log("\x1b[33m%s\x1b[0m",`Submitting problemID : ${randomProblemID}, problemName: ${randomProblemName}`);
        //submit code
        const result = await submitCode(randomProblemID!);
        if(result == submitStatus.SUCCESS){
            count_task++;
            console.log("\x1b[33m%s\x1b[0m",`Submitted ${count_task}/${limit_task} times`);
        }
        // warning color console log
        if(result != submitStatus.NOT_FOUND){
            const random_delay = _.random(delay_low, delay_high);
            console.log("\x1b[33m%s\x1b[0m",`Waiting ${random_delay} minutes to submit next code!`);
            await delay(random_delay* 60 * 1000);
        }
    }

}).catch(() => {
    console.log("\x1b[31m%s\x1b[0m",`Login failed! Check your cookie and .env file!`);
});