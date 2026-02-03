#include <stdio.h>
#define MY_AGE 32
#define MAX(a,b) a>b?a:b //function like macro

#define SQR(n) (n)*(n)


void myFunc(void)
{
    printf("%s\n", __FUNCTION__);
}

int main()
{
    printf("This code runs on line: %d\n", __LINE__);
    printf("The time is: %s\n", __TIME__);
    myFunc();
    return 0;
}