// const interval = 10; // 2 seconds
// setInterval(() => {
//     console.log('Hello, World!');
// }, interval);   

const fs = require('fs');
const path = require('path');
const { exec } = require('child_process');

const directoryPath = path.join(__dirname, '../recursion');
fs.readdir(directoryPath, (err, files) => {
    if (err) {
        return console.log('Unable to scan directory: ' + err);
    }
    files.forEach((file) => {
        const filePath = path.join(directoryPath, file
);;
        fs.stat(filePath, (err, stats) => {
            if (err) {
                return console.log('Unable to get file stats: ' + err);
            }
            const lastModified = new Date(stats.mtime);
            const now = new Date();
            const timeDiff = now - lastModified;
            if (timeDiff < interval) {
                console.log(`File modified: ${filePath}`);
                exec(`code "${filePath}"`);
            }
        });
    });
});