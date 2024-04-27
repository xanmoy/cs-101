// problem no 4


let no = 9;
if (no % 2 == 0) {
    console.log("The number is divisible by 2")
    if (no % 3 == 0) {
        console.log("The number is also divisible by 3")
    }
    else {
        console.log("The number is not divisible by 3")
    }
} else if (no % 3 == 0) {
    console.log("The number is divisible by 3")
    if (no % 2 == 0) {
        console.log("The number is also divisible by 2")
    } else {
        console.log("The number is not divisible by 2")
    }
} else {
    console.log("The number is not divisible by 2 and 3")
}

// problem no 5

let age = 10;
let a = age > 18 ? "You can drink" : "You cannot drink"
console.log(a)