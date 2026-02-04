#include <stdio.h>
int accumulate(int x);

int main(void) {
    accumulate(10);
}

int accumulate(int x) {
    int total = 0;
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    total = x + a + b + c + d;
    return total;
}