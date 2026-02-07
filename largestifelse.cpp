#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Taking input from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest; 

    // Checking conditions to find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    cout << "The largest of the three is: " << largest << endl;

    return 0;
}
