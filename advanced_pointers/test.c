#include <stdio.h>


int main()
{
    int x = 20;
    int *first = &x;
    int **second = &first;

    x++;

    printf("%d\n", x);
    printf("%d\n", *first);
    printf("%d\n", **second);

    return 0;
}