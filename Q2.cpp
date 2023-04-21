#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    float max = 0;
    cin >> a >> b >> c;
    
    if(max < a)
    {
        max = a;
    }
    
    if(max < b)
    {
        max = b;
    }
    
    if(max < c)
    {
        max = c;
    }
    
    cout << max;
}