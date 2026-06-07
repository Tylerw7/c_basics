#include <iostream>


int main()
{
    int age = 33;

    int* myAge = &age;

    int* unknownPointer = nullptr;

    std::cout << *myAge;

    return 0;
}