import fs from 'fs';

const findSourceCode = (name: string): string | undefined => {
    const allFiles = fs.readdirSync(`${__dirname}/../../resources/code/`);
    const sourceCode = allFiles.find((file) => file.includes(name));
    return sourceCode;
}



export {findSourceCode}