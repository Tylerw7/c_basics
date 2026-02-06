#include <stdio.h>

// Arrays are always passed by address never value.

float avg(int nums[], int size)
{
    int i;
    float a = 0;
    for (i = 0; i < size; i++)
    {
        a += nums[i];
    }

    return (a / size);
}

int main()
{
    int number[] = {1, 4, 2, 9, 4, 6};
    float a = avg(number, 6);
    printf("%f\n", a);

    return 0;
}