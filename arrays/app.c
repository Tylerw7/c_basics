#include <stdio.h>

#define SWAP(x,y) {\
                    int temp = x;\
                    x = y;\
                    y = temp;}

int main(void) {
    int num = 5;
    int arr[10] = {3,5,2,7,1,11,20,4,9,8};
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (arr[i] > arr[j]) {
                SWAP(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}