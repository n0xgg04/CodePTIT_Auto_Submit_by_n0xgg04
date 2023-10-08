import dotenv from "dotenv";

dotenv.config();

const check_env = () => {
    if(!process.env.CODEPTIT_USERNAME){
        throw new Error('Username is required');
    }

    if(!process.env.CODEPTIT_PASSWORD){
        throw new Error('Password is required');
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