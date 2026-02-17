#include <stdio.h>

int main()
{
    int num1 = 12;
    int *num2 = &num1;

    printf("value of num1: %d\n", num1);
    printf("Value of num2: %d\n", *num2);

    *num2 = 15;

    printf("value of num1: %d\n", num1);
    printf("Value of num2: %d\n", *num2);

    return 0;
}