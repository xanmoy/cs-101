#include<stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    printf("\nEnter the radius of the circle\n");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\nThe circumference of the circle is %lf\n", circumference);
    printf("\nThe area of the circle is %lf\n", area);
    return 0;
}