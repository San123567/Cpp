#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    cout << "Enter any year to check: "; // Taking input from user
    cin >> year;

    // Function call
    if (isLeapYear(year))
        cout << year << " is a Leap Year.";
    else
        cout << year << " is not a Leap Year.";

    return 0;
}
