#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter any year to check: "; // Taking input from user 
    cin >> year;

    // A year is a leap year if it is divisible by 4 and not by 100, unless it is also divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << year << " is a Leap Year.";
    else
        cout << year << " is not a Leap Year.";

    return 0;
}
