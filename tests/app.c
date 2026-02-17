#include <stdio.h>

int main()
{
    // int num1 = 12;
    // int *num2 = &num1;

    // printf("value of num1: %d\n", num1);
    // printf("Value of num2: %d\n", *num2);

    // *num2 = 15;

    // printf("value of num1: %d\n", num1);
    // printf("Value of num2: %d\n", *num2);


    int arr1[] = {1,2,5,4,3};
    int *arr2 = arr1;

    *(arr2 + 1) = 10;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr1[i]);
    }



    return 0;
}