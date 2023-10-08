import dotenv from "dotenv";

dotenv.config();

const check_env = () => {
    if(!process.env.CSRF_TOKEN){
        throw new Error('CSRF_TOKEN not found');
    }

    if(!process.env.LIMIT_TASK){
        throw new Error('LIMIT_TASK not found');
    }

    if(!process.env.INIT_COUNT){
        throw new Error('INIT_COUNT not found');
    }

    if(!process.env.DELAY_LOW){
        throw new Error('DELAY_LOW not found');
    }

    if(!process.env.DELAY_HIGH){
        throw new Error('DELAY_HIGH not found');
    }
}

export default check_env;