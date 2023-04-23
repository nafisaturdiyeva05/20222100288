#include <iostream>

using namespace std;

int main() {
    char sign;
    float a, b;

    cin >> sign >> a >> b;

    switch (sign) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a / b << endl;
            } else {
                cout << "Error: division by zero" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            break;
    }

    return 0;
}

