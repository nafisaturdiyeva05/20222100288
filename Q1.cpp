#include <iostream>

using namespace std;

int main()
{
    int age;
    
    cin >> age;
    
    if(age >= 18)
    {
        cout << "Eligible";
    }
    else if(age < 180)
    {
        cout << "Not Eligible";
    }
}