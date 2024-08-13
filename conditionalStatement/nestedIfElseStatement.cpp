#include <iostream>
using namespace std;

int main()
{
    int a = 100, b = 200, c = 300;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is Greater";
        }
        else
        {
            cout << c << " is is Greater";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is Greater";
        }
        else
        {
            cout << c << " is Greater";
        }
    }

    return 0;
}