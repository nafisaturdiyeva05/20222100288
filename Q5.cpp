#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if(ch >= '0' and ch <= '9')
    {
        cout << "You have entered a Digit";
    }
    else if((ch >= 'A' and ch <= 'Z') or (ch >= 'a' and ch <= 'z'))
    {
        cout << "You have entered an Alphabet";
    }
    
    return 0;
}