#include <iostream>


int main()
{
    int age = 33;

    int* myAge = &age;

    std::cout << *myAge;

    return 0;
}