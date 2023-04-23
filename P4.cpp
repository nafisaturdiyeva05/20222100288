#include <iostream>

using namespace std;

int main() {
    int month, days;

    cout << "Enter the numerical value of a month: ";
    cin >> month;

    switch (month) {
        case 1: // January
            days = 31;
            break;
        case 2: // February
            days = 28;
            break;
        case 3: // March
            days = 31;
            break;
        case 4: // April
            days = 30;
            break;
        case 5: // May
            days = 31;
            break;
        case 6: // June
            days = 30;
            break;
        case 7: // July
            days = 31;
            break;
        case 8: // August
            days = 31;
            break;
        case 9: // September
            days = 30;
            break;
        case 10: // October
            days = 31;
            break;
        case 11: // November
            days = 30;
            break;
        case 12: // December
            days = 31;
            break;
        default:
            cout << "Invalid month entered." << endl;
            return 0;
    }

    cout << days << endl;

    return 0;
}
