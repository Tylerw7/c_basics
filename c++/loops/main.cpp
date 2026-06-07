#include <iostream>


int main()
{
    int count = 5;

    while (count > 0)
    {
        std::cout << count;
        count--;
    }

    std::cout << "\nwhile loop finished";

    for (int i = 0; i <= 8; i++)
    {
        std::cout << "\nfor loop" << i;
    }

    return 0;
}