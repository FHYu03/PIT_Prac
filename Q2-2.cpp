#include <iostream>
#include <string>
using namespace std;

void Mimic() {
    string input;
    while (getline(cin, input)) {
        cout << input << endl;
        if (input == "end") {
            break;
        }
    }
}

