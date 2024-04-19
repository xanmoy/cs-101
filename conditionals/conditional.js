console.log("************** Conditional Statements *******************");
// Conditional Statements
// if, else if, else
// let a = prompt("Enter your age")
let a = "21";
console.log(typeof a);
a = Number.parseInt(a);
console.log(typeof a);

if (a > 0 && a <= 18) {
    console.log("You are a child");
}
else if (a > 18 && a <= 60) {
    console.log("You are an adult");
}
else if (a > 60) {
    console.log("You are a senior citizen");
}
else {
    console.log("Invalid age");
}

// Switch Case
console.log("************** Switch Case *******************");
let day = 200;
switch (day) {
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    case 4:
        console.log("Thursday");
        break;
    case 5:
        console.log("Friday");
        break;
    case 6:
        console.log("Saturday");
        break;
    case 7:
        console.log("Sunday");
        break;
    default:
        console.log("Invalid day");
}

// Ternary Operator

console.log("************** Ternary Operator *******************");

let age = 45;
console.log((age > 18) ? "You can drink" : "You cannot drink");