const http = require("http");
const fs = require("fs");
const url = require("url");

const myServer = http.createServer((req, res) => {
    if (req.url === "/favicon.ico") return res.end();
    const log = `${Date.now()}: ${req.method} ${req.url} New Req Received\n`;
    const myUrl = url.parse(req.url, true);
    console.log(myUrl);
    fs.appendFile("server.log", log, (err, data) => {
        switch (myUrl.pathname) {
            case "/":
                if (req.method === "GET") return res.end(`Welcome HomePage`);

                // res.end("<h1>Welcome HomePage</h1>");
                break;
            case "/about":
                const username = myUrl.query.myname || "Guest";

                res.writeHead(200, { "Content-Type": "text/html" });
                res.end(`Hi ${username}`);
                break;
            case "/search":
                const search = myUrl.query.search_query || "No Query";
                res.end(`Search Results for ${search}`);
                break;
            case "/signup":
                if (req.method === "GET") return res.end("Signup Page");
                else if (req.method === "POST") {
                    //DB Query
                    res.end("Signup Success");
                }
            default:
                res.writeHead(404, { "Content-Type": "text/html" });
                res.end("Page Not Found");
        }
        // res.end("Hello from my server");
    });
    // HTTPS Menthods - Get - Post - Put - Patch - Delete
    // Get - to get data from the server
    // Post - to send data to the server
    // Put - to update data on the server for the first time
    // Patch - to update data on the server for the second time
    // Delete - to delete data from the server
});

myServer.listen(8000, () => {
    console.log("Server is running on port 8000");
});
