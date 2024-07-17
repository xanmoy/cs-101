#include <stdio.h>
int main(){

    int x; // Variable declaration
    x = 123; // Variable Initialization
    int age = 21; // Variable declaration + Initialization
    float gpa = 2.05; // Floating point number
    char grade = 'A'; // Character
    char name[] = "John"; // String or Array of characters
    // format specifier

    // %d is used for int
    printf("Your age is %d\n years old\n", age); 
    printf("%%d is used for int\n\n");

    // %f is used for float
    printf("Your gpa is %f\n", gpa);
    printf("%%f is used for float\n\n");

    // %c used is for char
    printf("Your grade is %c\n", grade);
    printf("%%c used is for char\n\n");

    // %s is used for strings
    printf("Your name is %s\n", name);
    printf("%%s is used for strings\n");
    return 0;
}