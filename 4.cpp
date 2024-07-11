#include <iostream>
#include <string>

using namespace std;

int main() {
  string my_str;

  cout << "Enter a car brand: ";
  getline(cin, my_str);

  cout << "My car brand name is " + my_str;
}