#include <iostream>
using namespace std;

int main() {

    int subjectCodeArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : subjectCodeArr) {
        cout<<i<<"\n";
    }

    return 0;
}