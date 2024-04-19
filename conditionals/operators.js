77; //This is a expression
"Hello World"; //This is a expression
true; //This is a expression
console.log("Operators in JavaScript are used to perform operations on variables and values.")
let a = 10;
let b = 4;
// Arithmetic Operators
console.log("************** Arithmetic Operators *******************");
console.log("The value of a + b is", a + b);
console.log("The value of a - b is", a - b);
console.log("The value of a * b is", a * b);
console.log("The value of a / b is", a / b);
console.log("The value of a % b is", a % b);
console.log("The value of a ** b is", a ** b);

console.log("The value of a is", a);

console.log("The value of a++ is", a++);
console.log("The value of ++a is", ++a);

console.log("The value of a is", a);

console.log("The value of a-- is", a--);
console.log("The value of --a is", --a);

console.log("The value of a is", a);

// Assignment Operators
console.log("************** Assignment Operators *******************");
let assignment = 1;
console.log("The value of a is", assignment);
assignment += 5; // same as assignment = assignment + 5
console.log("The value of a is", assignment);
assignment -= 5; // same as assignment = assignment - 5
console.log("The value of a is", assignment);
assignment *= 5; // same as assignment = assignment * 5
console.log("The value of a is", assignment);
assignment /= 5; // same as assignment = assignment / 5
console.log("The value of a is", assignment);
assignment %= 5; // same as assignment = assignment % 5
console.log("The value of a is", assignment);

// Comparison Operators
console.log("************** Comparison Operators *******************");
let x = 6;
let y = "6";
console.log("x == y is ", x == y);
console.log("x != y is ", x != y);
console.log("*********************************");
console.log("x != y is ", x === y);
console.log("x != y is ", x !== y);
console.log("*********************************");
console.log("x >= y is ", x >= y);
console.log("x <= y is ", x <= y);
console.log("x > y is ", x > y);
console.log("x < y is ", x < y);

// Logical Operators
console.log("************** Logical Operators *******************");
let c = 5;
let d = 6;
console.log("c<d && c==5 is ", c < d && c == 5); // AND Operator - Returns true if both the operands are true
console.log("c<d || c==5 is ", c < d || c == 5); // OR Operator - Returns true if one of the operands is true
console.log(!false)

/* 
This is a multiline comment
*/
// This is a single line comment