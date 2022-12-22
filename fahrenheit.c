/*
    Convert fahrenheit to Celcius
    formular:
        C = (F - 32) / 1.8;

    by Salami Abdullahi
    19/12/2022 
*/

#include <stdio.h>

int main(void)
{
    int fahrenheit, celcius;

    printf("Enter fahrenheit as integer: ");
    scanf("%d", &fahrenheit);
    celcius = (fahrenheit - 32) / 1.8;
    printf("%d fahrenheit is %d celcius.\n", fahrenheit, celcius);
    return 0;
}