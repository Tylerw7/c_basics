#include <stdio.h>

extern int total;

int deduct(int x) {
    total -= x;
    printf("%s: total = %d\n", __FUNCTION__, total);

    return 0;
}