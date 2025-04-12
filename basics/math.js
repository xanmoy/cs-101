function add(a, b) {
    return a + b;
}
function sub(a, b) {
    return a - b;
}

module.exports = {
    add,
    sub,
}
module.exports = {
    addFn: add,
    addFn: sub
}

// using anonymous functions
// exports.add = (a,b) => {
//     return a + b;
// }
// exports.sub = (a,b) => {
//     return a - b;
// }