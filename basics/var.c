#include <stdio.h>
int main(){

    int x; // Variable declaration
    x = 123; // Variable Initialization
    int age = 21; // Variable declaration + Initialization
    float gpa = 2.05; // Floating point number
    char grade = 'A'; // Character
    char name[] = "John"; // String or Array of characters
    // format specifier
    printf("Your age is %d\n years old", age); // %d is used for int
    printf("Your gpa is %f\n", gpa);           // %f is used for float
    printf("Your grade is %c\n", grade); // %c used is for char
    printf("Your name is %s\n", name);   // %s is used for strings
    return 0;
}