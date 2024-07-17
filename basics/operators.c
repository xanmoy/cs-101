#include<stdio.h>

int main(){
    //Arthmatic Operators
    int a = 100;
    int b = 20;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = a / b;
    int g = a % b;
    int h = a++;
    int i = b--;
    int j = ++a;
    int k = --b;
    printf("Addition: %d\n", c);
    printf("Subtraction: %d\n", d);
    printf("Multiplication: %d\n", e);
    printf("Division: %f\n", f);
    printf("Modulus: %d\n", g);
    printf("Post Increment: %d\n", h);
    printf("Post Decrement: %d\n", i);
    printf("Pre Increment: %d\n", j);
    printf("Pre Decrement: %d\n", k);

    //Augmented Assignment Operators
    int l = 10;
    l += 5; //means l = l+5

    int m = 2;
    m -= 5; //means m = m-5

    int n = 3;
    n *= 5; //means n = n*5

    int o = 4;
    o /= 5; //means o = o/5
    o %= 5; //means o = o%5

    printf("Augmented Assignment Operators: %d %d %d %d %d\n", l, m, n, o, o);

        return 0;
}