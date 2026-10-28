#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter an input: ";
    cin >> input;

    bool isNumeric = true;
    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric && !input.empty()) {
        cout << "\"" << input << "\" is a numeric constant." << endl;
    } else {
        cout << "\"" << input << "\" is not numeric." << endl;
    }

    return 0;
}
