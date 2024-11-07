// myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H

// Custom Header File for common declarations

// Define a constant
#define MAX_NAME_LENGTH 50

// Function Declarations
int add(int a, int b); // Function to add two integers

// Structure Declaration
struct student
{
    int roll_no;
    char name[MAX_NAME_LENGTH];
    float marks;
};

// Union Declaration
union student_union
{
    int roll_no;
    char name[MAX_NAME_LENGTH];
    float marks;
};

// Function prototypes for mathematical operations
int multiply(int a, int b);
int subtract(int a, int b);
double calculate_square_root(double number);

// Custom macros
#define PRINT_MSG(msg) printf("Message: %s\n", msg)

// Time-related functions
void print_current_time();

#endif // MYHEADER_H
