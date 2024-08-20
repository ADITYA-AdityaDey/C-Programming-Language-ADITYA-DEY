#include <iostream>
using namespace std;

int main() {

    int age;
    cout<<"Enter Your Age: ";
    cin>>age;

    if(age>=18)
    goto vote;
    else
    goto notVote;

    vote:
        cout<<"Eligible for Vote";
        return 1;
    notVote:
        cout<<"Not Eligible for Vote";

    return 0;
}