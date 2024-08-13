// Calculator Program

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Eter Any Two Number: ";
    cin >> a >> b;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int add = a + b;
        cout << add;
    }
    else if (choice == 2)
    {
        int sub = a - b;
        cout << sub;
    }
    else if (choice == 3)
    {
        int mul = a * b;
        cout << mul;
    }
    else if (choice == 4)
    {
        int div = a / b;
        cout << div;
    }
    else
    {
        cout << "Invalid Choice ....";
    }

    return 0;
}