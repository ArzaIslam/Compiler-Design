#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter First name: ";
    cin >> firstName;
    cout << "Enter Last name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;

    cout << "output: full name = \"" << fullName << "\"" << endl;

    return 0;
}
