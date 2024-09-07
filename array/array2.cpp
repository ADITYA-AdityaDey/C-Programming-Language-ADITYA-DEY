#include <iostream>
using namespace std;

int main() {

    int arr2d[2][2];

    cout << "Enter Array Elements: ";

    for(int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 1; j++) {  // Initialize j to 0
            cin >> arr2d[i][j];
        }
    }

    cout << "\nArray Elements: \n";
    for(int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 1; j++) {
            cout << arr2d[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}