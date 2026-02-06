#include <stdio.h>

/* this program is made to show the difference 
    between passing a variable by value and address
*/

void swap(int *x, int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
    printf("swap >> %d\t%d\n", *x, *y);
}


int main(void) {
    int x = 10;
    int y = 20;

    printf("main >> %d\t%d\n", x, y);
    swap(&x, &y);
    printf("main >> %d\t%d\n", x, y);

    return 0;
}