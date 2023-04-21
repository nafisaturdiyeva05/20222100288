#include <iostream>

using namespace std;

int main()
{
    float reg, att;
    cin >> reg >> att;
    float perc = (att / reg) * 100;
    cout << "Percentage attended: " << perc << endl;
    if (perc >= 75)
    {
        cout << "Allowed";
    }
    else if (perc < 75)
    {
        cout << "Not Allowed";
    }
    
    return 0;
}