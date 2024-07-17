#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char name[25];
    int age;

    printf("\nEnter your name\n");
    // scanf("%s", name);
    // fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nHello %s How are you?\n", name);

    printf("\nEnter your age\n");
    // scanf("%d", &age);
    printf("\nYou have entered %d as your age\n", age);

    // math functions
    double A = sqrt(9);
    double B = pow(2,4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%lf", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);
    return 0;
}