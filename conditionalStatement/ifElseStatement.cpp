#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Any Two Number: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is Greater";
    }
    else
    {
        cout << b << " is Greater";
    }
}