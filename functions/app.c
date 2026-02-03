#include <stdio.h>

// This demo is for scope and life time

int accumulate(int x); // function prototype
int total = 0; // to prevent this variable from being shared to other files we at the (static) key word
int deduct(int x);




int main(void){
    accumulate(10);
    accumulate(8);
    deduct(2);
}


int accumulate(int x){
    // int total = 0; When total is in the function the variable only lives for the time the function is run, it is not global
    //static int total = 0;
    total += x;
    printf("%s: total = %d\n", __FUNCTION__, total);
    return 0;
}