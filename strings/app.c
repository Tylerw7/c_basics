#include <stdio.h>
#include <string.h>

// strlen, strcpy, strcat



int main()
{
    char str[] = "Apple";
    char str2 [] = "Orange";
    int count = strlen(str);

    strcpy(str2, str);
    printf("%s\n", str2);
    printf("%d\n", count);

    return 0;
}