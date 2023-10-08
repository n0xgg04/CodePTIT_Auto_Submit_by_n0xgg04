import axios from 'axios';
import config from '../config/config';
import cheerio from 'cheerio';

export const getCodePtitCsrf = async (problemCode: string, cookie: string) => {
    const api = `${config.api.host}/student/question/${problemCode}`;
    const result = await axios.get(api, {
        headers: {
            Cookie: cookie,
            "User-Agent":
                "Mozilla/5.0 (Linux; Android 6.0; Nexus 5 Build/MRA58N) AppleWebKit/537.36 (KHTML, like Gecko)",
        },
    });
    const $ = cheerio.load(result.data);
    const csrf = $('input[name="_token"]').val();
    return csrf as string;
} 