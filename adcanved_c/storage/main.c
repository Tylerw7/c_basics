#include <stdio.h>


int i = 5;

extern void add();

void foo(void);

int main(void)
{
    printf("%i  ", i);
    foo();
    printf("%i\n", i);
    add();

    return 0;
}