#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter line(s) of code/comment: ";
    getline(cin, line);

    int len = line.length();

    // Check for single-line comment (//) or multi-line comment (/* ... */)
    if (len >= 2 && line[0] == '/' && line[1] == '/') {
        cout << "It is a single-line comment." << endl;
    }
    else if (len >= 4 && line[0] == '/' && line[1] == '*' && line[len - 2] == '*' && line[len - 1] == '/') {
        cout << "It is a multi-line comment." << endl;
    }
    else {
        cout << "It is not a comment." << endl;
    }

    return 0;
}
