#include <iostream>


class DynamicArray
{
    private:
        int* arr;
        int size;
        int _capacity;

    public:

        DynamicArray(int capacity)
        {
            size = 0;
            _capacity = capacity;
            arr = new int[_capacity];
        };

        
};