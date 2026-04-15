#include <iostream>

using namespace std;

int main()
{
    int a[5];

    a[0] = 14;
    a[1] = 10;
    a[2] = 30;

    cout << sizeof(a) << endl;
    cout << a[1] << endl;

    return 0;
}