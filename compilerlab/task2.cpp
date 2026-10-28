#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    int opCount = 1;
    cout << "Ans:" << endl;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << "operator" << opCount++ << ": " << ch << endl;
        }
    }

    if (opCount == 1) {
        cout << "No operators found." << endl;
    }

    return 0;
}
