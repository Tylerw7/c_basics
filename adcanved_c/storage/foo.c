
#include <stdio.h>

void foo (void) 
{
    extern int i;
    i = 100;
}

void add()
{
    printf("%d\n", 5 + 5);
    
}