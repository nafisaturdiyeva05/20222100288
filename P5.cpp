#include <iostream>

using namespace std;

int main() {
    char input;
    cin >> input;

    if (isdigit(input)) {
        cout << "You have entered a Digit" << endl;
    } else if (isalpha(input)) {
        cout << "You have entered an Alphabet" << endl;
    } else {
        cout << "You have entered a Special Character" << endl;
    }

    return 0;
}

