#include <iostream>

using namespace std;

int main () {
    float n1, n2, n3, max_number;
    cin >> n1 >> n2 >> n3;

    max_number = n1;
    if (n2 > max_number) {
        max_number = n2;
    }
    if (n3 > max_number) {
        max_number = n3;
    }

    cout << "The maximum number is " << max_number << endl;
    return 0;
}

