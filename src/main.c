#include <stdio.h>    // Standard Input Output Header File
#include "myheader.h" // Custom Header File
#include <stdlib.h>   // Standard Library Header File
#include <string.h>   // String Library Header File
#include <math.h>     // Math Library Header File
#include <time.h>     // Time Library Header File
#include <sys/time.h> // System Time Library Header File
#include <unistd.h>   // Unix Standard Library Header File
#include <sys/types.h> // System Types Library Header File
#include <sys/stat.h>  // System Statistics Library Header File
#include <fcntl.h>     // File Control Library Header File
#include <errno.h>     // Error Number Library Header File
#include <signal.h>    // Signal Library Header File
#include <sys/wait.h>  // System Wait Library Header File
#include <sys/mman.h>  // System Memory Mapping Library Header File
#include <sys/ioctl.h> // System Input/Output Control Library Header File
#include <sys/socket.h> // System Socket Library Header File
#include <netinet/in.h> // Internet Network Library Header File
#include <arpa/inet.h> // Internet Address Library Header File
#include <netdb.h>     // Network Database Library Header File
#include <pthread.h>   // POSIX Thread Library Header File


// Function Declaration
int add(int a, int b) // this is called function definition
{
    int sum = a + b;
    printf("Sum is %d\n", sum);
    return sum;
}

//Sructure Declaration
// struct student
// {
//     int roll_no;
//     char name[20];
//     float marks;
// }xanmoy;

//Union Declaration
union students
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{

    int a = 2, b = 3;
    printf("%d\n", a);

    // scanf("%d", &a);

    if (a == 2 && b == 3)
    {
        printf("23\n");
    }
    // if else
    if (a == b)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    // switch case
    int cars = 2;
    switch (cars)
    {
    case 1:
        printf("One Car\n");
        break;
    case 2:
    printf("Two Cars\n");
    break;
    case 3:
    printf("Three Cars\n");
    break;
    default:
    printf("No Cars\n");
    break;
    }

    //Loops -   Loops are used to execute a block of code multiple times.
    //while loop - The while loop is used to execute a block of code repeatedly until a given condition is satisfied.
    int i = 2, j = 3;
    while (i !=j)
    {
        printf("A is not equal to B\n");
        i++;
    }

    //do while loop - The do while loop is similar to the while loop with the only difference that the condition is checked after executing the statements.
    int k = 2, l = 3;
    do
    {
        printf("A is not equal to B\n");
        k++;
    } while (k != l);
    //for loop - The for loop is used to execute a block of code repeatedly for a specified number of times.
    for (int m = 2; m <= 5; m++)
    {
        printf("Value of m is %d\n", m);
    }

    //Functions - A function is a block of code that performs a specific task.
    int sum = add(5, 7);

    //Arrays - An array is a collection of similar data items stored at contiguous memory locations.
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[]={1,2,3,4,5,6,7,8,9,10};

    printf("Value of array is %d\n", arr[4]);

    for (int n = 0; n < 10; n++)
    {
        printf("Value of array is %d\n", arr2[n]);
    }
    //2D Arrays
    int matrix[2][2] = {{1, 2}, {3, 4}};
    printf("Value of matrix is %d\n", matrix[1][1]);
    //3D Arrays
    int cube[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for (int o = 0; o < 2; o++)
    {
        for (int p = 0; p < 2; p++)
        {
            for (int q = 0; q < 2; q++)
            {
                printf("Value of cube is %d\n", cube[o][p][q]);
            }
        }
    }

    //Pointers - A pointer is a variable that stores the memory address of another variable.
    int x = 5;
    int *ptr = &x;
    printf("Value of x is %d\n", *ptr);
    printf("Address of x is %p\n", ptr);

    //Double Pointers - A pointer that holds the address of another pointer is called a double pointer or pointer to pointer.
    int y = 10;
    int *ptr1 = &y;
    int **ptr2 = &ptr1;
    printf("Value of y is %d\n", **ptr2);
    printf("Address of y is %p\n", *ptr2);

    //Strings - Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a special character ‘\0’.
    char myStr[] = "Hello";
    printf("Value of myStr is %s\n", myStr);

    //Structures - A structure is a user defined data type in C/C++ that allows to combine data items of different kinds.
    struct student xanmoy={1,"Xanmoy",90.5};
    printf("Roll No is %d\n", xanmoy.roll_no);

    //Union- union is a user defined data type which is similar to structure but it uses the same memory location for all its members. It is a memory efficient way to store data.
    union students xanmoy1;
    xanmoy1.roll_no=1;
    printf("Roll No is %d\n", xanmoy1.roll_no);
    xanmoy1.name[0]='X';
    printf("Name is %c\n", xanmoy1.name[0]);
    xanmoy1.marks=90.5;
    printf("Marks is %f\n", xanmoy1.marks);


    return 0;
}