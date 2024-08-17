#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Friday";
        break;
    case 5:
        cout << "Saturday";
        break;
    default:
        cout << "Invalid Choice ....";
    }

    return 0;
}