#include <iostream>

using namespace std;

int main()
{
    char op;
    float x, y;
    cout << "Enter mathematical operation (+, -, *, /): ";
    cin >> op;
    cout <<"Enter two numbers: ";
    cin >> x >> y;
    switch(op)
    {
        case '+':
            cout << x + y;
            break;
        case '-':
            cout << x - y;
            break;
        case '*':
            cout << x * y;
            break;
        case '/':
            cout << x / y;
            break;
    }
    
}