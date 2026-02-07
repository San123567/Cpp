#include <iostream>
#include <algorithm> // For using the max() function
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Using max() function to find the largest number
    int largest = max(num1, max(num2, num3));

    cout << "The largest of the three is: " << largest << endl;

    return 0;
}
