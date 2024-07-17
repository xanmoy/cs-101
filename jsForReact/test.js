let myAge = 17
let isOfAge = false;

if (myAge > 18) {
    isOfAge = true;
} else {
    isOfAge = false;
}

isOfAge = myAge > 18 ? true : false 
console.log(isOfAge)

let color = "red"
let isCorrect = false
color = isCorrect ? "green" : "red"
color = isCorrect && "green" 
console.log(color)