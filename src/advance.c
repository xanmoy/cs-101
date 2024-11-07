#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include<stdarg.h>
#include <sys/time.h>
#include <time.h>

int main()
{
    // Time
    time_t current_time = time(NULL);                 // Get the current time
    printf("Current time: %ld\n", current_time);      // Print the current time
    printf("Current time: %s", ctime(&current_time)); // Print the current time

    clock_t start_time = clock(); // Get the start time
    for (int i = 0; i < 5; i++)
    {
        printf("Value of i is %d\n", i);
    }
    clock_t end_time = clock(); // Get the end time
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // CLOCK_PER_SEC is a macro defined in time.h. Macro is a fragment of code which has been given a name.

    printf("hello\n");
    struct timespec ts;
    ts.tv_sec = 1;
    ts.tv_nsec = 0;
    printf("The program will wait for 1 second before continuing...\n");
    nanosleep(&ts, NULL);
    printf("World\n");
    // File Handling
    FILE *file_pointer = fopen("sample.txt", "w"); // Open the file in write mode
    fprintf(file_pointer, "Hello World\n");        // Write to the file
    fclose(file_pointer); 
    
    // writing to a file
    FILE *file_pointer2 = fopen("secret.txt", "w"); // Open the file in write mode
    fprintf(file_pointer2, "123456789\n");        // Write to the file
    fclose(file_pointer2);                          // Close the file

    // Reading from a file
    file_pointer2 = fopen("secret.txt", "r"); // Open the file in read mode
    char buffer[255];                        // Buffer to store data read from the file
    fscanf(file_pointer2, "%s", buffer); // Read from the file
    printf("Data from file: %s\n", buffer); // Print the data read from the file
    fclose(file_pointer2); // Close the file

    remove("sample.txt"); // Delete the file
    rename("secret.txt", "new_secret.txt"); // Rename the file

    //Math.h - to run math.h functions we need to compile the code with -lm flag like this: gcc -o advance advance.c -lm

    int a = 100;
    printf("Square root of %d is %.2f\n", a, sqrt(a)); // Square root
    printf("Log of %d is %.2f\n", a, log(a)); // Log
    printf("Log10 of %d is %.2f\n", a, log10(a)); // Log10
    printf("Cube root of %d is %.2f\n", a, cbrt(a)); // Cube root
    printf("Power of %d to the 2 is %.2f\n", a, pow(a, 2)); // Power
    printf("Absolute value of -100 is %d\n", abs(-100)); // Absolute value
    printf("Ceiling of 3.7 is %f\n", ceil(3.7)); // Ceiling
    printf("Floor of 3.7 is %f\n", floor(3.7)); // Floor
    
    printf("Value of PI is %.2f\n", M_PI); // Value of PI
    printf("Value of E is %.2f\n", M_E); // Value of E
    printf("Value of M_LN2 is %.2f\n", M_LN2); // Value of M_LN2

    //String.h
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[20];

    int len = strlen(str1); // Length of the string
    printf("Length of str1 is %d\n", len);

    strcpy(str3, str1); // Copying a string`
    printf("str3 is %s\n", str3);

    strcat(str1, str2); // Concatenating two strings
    printf("str1 is %s\n", str1);
    
    if (strcmp(str1, str2) == 0) // Comparing two strings
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    //Stdarg.h - Variable Arguments
    int sum(int count, ...)
    {
        va_list args;
        va_start(args, count);
        int sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += va_arg(args, int);
        }
        va_end(args);
        return sum;
    }

    printf("Sum of 5, 10, 15 is %d\n", sum(3, 5, 10, 15));

    //Stdlib.h - Memory Management
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] is %d\n", i, arr[i]);
    }

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr2 = (int *)malloc(size * sizeof(int)); // Allocating memory using malloc - uninitialized memory

    int *arr3 = (int *)calloc(size, sizeof(int)); // Allocating memory using calloc - initializes the allocated memory to zero

    for (int i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] is %d\n", i, arr2[i]);
    }

    arr2 = (int *)realloc(arr2, 10 * sizeof(int)); // Reallocating memory

    free(arr2); // Freeing the allocated memory

    //Generating Random Numbers - The rand() function is used to generate random numbers in C.
    srand(time(0)); // Seed for the random number generator
    for (int i = 0; i < 5; i++)
    {
        printf("Random number %d: %d\n", i, rand() % 100);
    }

    return 0;
}