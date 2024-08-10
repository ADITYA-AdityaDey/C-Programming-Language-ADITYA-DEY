// Datatypees

/*
1. Basic Datatypes (Primitive Datatypes):

    >> int
    >> char
    >> float
    >> double
    >> bool
    >> void

2. Derived Datatypes:

    >> Array
    >> function
    >> pointer
    >> reference

3. User-defined Datatypes:

    >> structure
    >> union
    >> class
    >> enumeration

*/

#include <iostream>
using namespace std;

int b = 200;        // Global Variable
static int d = 400; // Static Variable

int main()
{
    int a = 100;        // Local Variable
    static int c = 300; // Static Variable
    cout << a << " " << b << " " << c << " " << d;
}