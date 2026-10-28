#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    cout << "Enter an identifier: ";
    cin >> id;

    bool isValid = true;

    // Condition a: First character must be a letter or underscore
    if (id.empty() || !(isalpha(id[0]) || id[0] == '_')) {
        isValid = false;
    }
    else {
        // Condition b: Subsequent characters must be alphanumeric or underscore
        for (int i = 1; i < id.length(); i++) {
            if (!(isalnum(id[i]) || id[i] == '_')) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        cout << "\"" << id << "\" is a valid identifier." << endl;
    } else {
        cout << "\"" << id << "\" is not a valid identifier." << endl;
    }

    return 0;
}
