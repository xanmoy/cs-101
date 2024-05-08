#include<stdio.h>
#include <stdbool.h>
int main(){
    //data types in c
    int x = 10; // integer
    float y = 10.5; // floating point number
    double z = 10.5; // double floating point number
    char a = 'A'; // character
    char name[] = "John"; // string or array of characters
    bool e = true;
    char f = 121;
    unsigned char g = 255;
    short int h = 32768;
    unsigned short int i = 65535;
    int j = 42134334;
    unsigned int k = 253215443;
    long long int l = 32523452345254545;
    unsigned long long int m = 3252345254353455667U;

    printf("Integer: %d\n", x);
    printf("Float: %f\n", y);
    printf("Double: %f\n", z);
    printf("Character: %c\n", a);
    printf("String: %s\n", name);
    printf("Boolean: %d\n", e);
    printf("ASCII: %c\n", f);
    printf("No ASCII: %d\n", f);
    printf("Unsigned Char: %d\n", g);
    printf("Short Int: %d\n", h);
    printf("Unsigned Short Int: %d\n", i);
    printf("Int: %d\n", j);
    printf("Unsigned Int: %d\n", k);
    printf("Long Long Int: %lld\n", l);
    printf("Unsigned Long Long Int: %lld\n", m);
    return 0;
}