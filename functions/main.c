#include <stdio.h>

int is_even(int n); // function prototype


int main(void)
{
    int x = 5;
    int result = is_even(x);
    if (result == 0){
        printf("Number is odd \n");
    }
    else {
        printf("number is even \n");
    }
}

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

