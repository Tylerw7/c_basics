#include <iostream>

int counter = 0;
int boxes[] = {0,0,0,0,0,1};
int isBall(int index);

int main() {

    std::cout << "starting function";
    int result = isBall(counter);
    std::cout << result;
    

    return 0;
}

int isBall(int index) {
    if (boxes[index]) return boxes[index];
    std::cout << index;
    return isBall(index + 1); 
};