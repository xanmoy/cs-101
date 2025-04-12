const { error } = require('console');
const fs = require('fs');

// Synschronous file system operations blocking 
fs.writeFileSync('./test.txt', 'Hello World!');

// Asynchronous file system operations non-blocking
fs.writeFile("./test.txt", "Hello World! Async", (err) => { })

// Synchronous file system operations
// const result = fs.readFileSync("./contacts.txt", "utf-8")

// Asynchronous file system operations
// fs.readFile("./contacts.txt", "utf-8", (err, result) => {
//     if(err) {
//         console.log("Error",err);
//     } else {
//         console.log(result);
//     }
// })
// console.log(result);

//Append to a file
// fs.appendFileSync("./test.txt", new Date().getDate().toLocaleString() )
// fs.appendFileSync("./test.txt", `${Date.now()}Hey There\n`)

// fs.copyFileSync("./test.txt", "./test2.txt")

// fs.unlinkSync("./test2.txt")

// console.log(fs.statSync("./test.txt"));
// fs.mkdirSync("testDir/a/b", { recursive: true });



