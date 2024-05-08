#include<stdio.h>

int main(){
    //format specifier 
    // %c for character
    // %d for integer
    // %f for float
    // %s for string (array of characters)
    // %lf for double
    // %x for hexadecimal
    // %o for octal
    // %u for unsigned int
    // %ld for long int
    // %lu for unsigned long int
    // %lld for long long int
    // %llu for unsigned long long int
    // %p for pointer
    // %e for scientific notation
    // %g for shorter of %f and %e
    // %i for integer
    // %hi for short int
    // %hu for unsigned short int
    
    //%.1 for decimal prediction
    //%10s for 10 spaces
    //%-10s for 10 spaces left aligned
    //%010s for 10 spaces right aligned
    //%*s for variable spaces
    //%*d for variable spaces
    //%.*f for decimal prediction
    //%.*s for decimal prediction
    //%.*d for decimal prediction
    //%.*f for decimal prediction
    //%.*s for decimal prediction
    //%.*d for decimal prediction

    float item1 = 5.75;
    float item2 = 6.25;
    float item3 = 7.50;

    printf("Item\tPrice\n");
    printf("----\t-----\n");
    printf("Item1\t%-8.2f\n", item1);
    printf("Item2\t%-8.2f\n", item2);

    printf("Item3\t%-8.2f\n", item3);

    return 0;
}