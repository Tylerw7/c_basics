#include <stdio.h>

int fun() {
    static int count = 0;

    count++;
    return count;
}


int main(void) 
{
    printf("%d ", fun());
    printf("%d ", fun());
    

    return 0;
}