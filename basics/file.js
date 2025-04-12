const fs = require('fs');
const os = require('os');
console.log(os.cpus().length);
console.log(1);
// blocking file system operations
// const result = fs.readFileSync("./contacts.txt", "utf-8")
fs.readFile("./contacts.txt", "utf-8", (err, result) => {
    console.log(result); 
}
)

console.log(2);
console.log(3);


// Thread pool size is 4
// Max? = 8 cores cpu 
