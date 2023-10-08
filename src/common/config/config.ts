import { ConfigInterface } from "@/types'";
import fs from 'fs';

const cookie = fs.readFileSync(`${__dirname}/cookie.txt`, 'utf-8');
if(!cookie) throw new Error('Cookie not found');

const config: ConfigInterface = {
    api : {
        host: 'https://code.ptit.edu.vn',
        FETCH_QUESTION: '/student/question',
        COOKIE: cookie
    }
}

export default config;