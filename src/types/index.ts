export interface ConfigInterface{
    api: KEY;
}

type API_KEY = 'host' | 'FETCH_QUESTION' | 'COOKIE';

type KEY = Record<API_KEY, string>;


export class ProblemInfo{
    public problemName?: string;
    public problemLink?: string;
    public problemID?: string;
    public problemStatus?: string;
    public problemTopic?: string;
    public problemDifficulty?: string;

    constructor(problemName: string, problemLink: string, problemID: string, problemStatus: string, problemTopic: string, problemDifficulty: string){
        this.problemName = problemName;
        this.problemLink = problemLink;
        this.problemID = problemID;
        this.problemStatus = problemStatus;
        this.problemTopic = problemTopic;
        this.problemDifficulty = problemDifficulty;
    }
}


export {
    API_KEY,
    KEY
}