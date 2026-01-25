#include <stdio.h>


int main(int argc, char *argv[])
{
    int numberArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("integer: %d\n", numberArgs);
    printf("integer: %s\n", argument1);
    printf("integer: %s\n", argument2);

    return 0;
}