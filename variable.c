#include <stdio.h>

int main(void)
{
    int myNum = 50, num = 20;
    char myChar;
    myChar = 'c';
    int sum = myNum + num;

    printf("The value of myNum is %d\n", myNum);
    printf("The value of sum is %d\n", sum);

    myNum = 10;
    printf("The value of myChar is %c\n", myChar);
    printf("The value of myNum is %d\n", myNum);
}