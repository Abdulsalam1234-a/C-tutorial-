/*
    Area and Circumference of a circle
    formulars:
        area = PI * r * r
        circum = 2 * PI * r
    Salami Abdullahi
    19/12/2022
*/

#include <stdio.h>

#define PI 3.14159

int main(void)
{

    double area = 0.0, radius = 0.0, circumference = 0.0; // declare variable to type 'double'
    printf("Enter radius: ");
    scanf("%lf", &radius); // collect radius value from user
    area = PI * radius * radius; // calculate area
    circumference = 2 * PI * radius; // calculate circumference
    printf("Area of a circle with radius %.2lf meters is %.2lf \n", radius, area);
    printf("circumference of a circle with radius %.2lf meters is %.2lf \n", radius, circumference);
    return 0;
}