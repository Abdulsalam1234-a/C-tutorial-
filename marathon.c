/*
    The distance of a marathon in kilometers
    by Salami Abdullahi
    18/12/2022
*/

#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("A marthon is %lf kilometers\n", kilometers);
    return 0;
}