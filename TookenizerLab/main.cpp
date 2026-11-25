#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char myText[100];

    char keyword[][10] = {
        "int", "float", "double", "char",
        "if", "else", "while", "for", "return"
    };

    char operators[][3] = {
        "+", "-", "*", "/", "=", "==", "!=",
        ">", "<", ">=", "<="
    };

    char separators[][3] = {
        "(", ")", "{", "}", "[", "]", ";", ","
    };

    ifstream MyReadFile("token.txt");

    if (!MyReadFile.is_open()) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    while (MyReadFile >> myText) {
        bool found = false;

        // Keyword চেক
        for (int i = 0; i < 9; i++) {
            int j = 0;
            while (myText[j] == keyword[i][j] && myText[j] != '\0') {
                j++;
            }
            if (myText[j] == '\0' && keyword[i][j] == '\0') {
                cout << myText << " : Keyword" << endl;
                found = true;
                break;
            }
        }
        if (found) continue;

        // Operator চেক
        for (int i = 0; i < 11; i++) {
            int j = 0;
            while (myText[j] == operators[i][j] && myText[j] != '\0') {
                j++;
            }
            if (myText[j] == '\0' && operators[i][j] == '\0') {
                cout << myText << " : Operator" << endl;
                found = true;
                break;
            }
        }
        if (found) continue;

        // Separator চেক
        for (int i = 0; i < 8; i++) {
            int j = 0;
            while (myText[j] == separators[i][j] && myText[j] != '\0') {
                j++;
            }
            if (myText[j] == '\0' && separators[i][j] == '\0') {
                cout << myText << " : Separator" << endl;
                found = true;
                break;
            }
        }
        if (found) continue;

        // Constant বা Identifier চেক
        if (myText[0] >= '0' && myText[0] <= '9') {
            cout << myText << " : Constant" << endl;
        } else {
            cout << myText << " : Identifier" << endl;
        }
    }

    MyReadFile.close();
    return 0;
}
