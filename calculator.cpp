#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // Taking input from user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    // Performing operations using switch case
    switch (op) {
        case '+': 
            cout << "Calculated Value: " << num1 + num2;
            break;
        case '-': 
            cout << "Calculated Value: " << num1 - num2;
            break;
        case '*': 
            cout << "Calculated Value: " << num1 * num2;
            break;
        case '/': 
            if (num2 != 0) // Checking for division by zero
                cout << "Calculated Value: " << num1 / num2;
            else
                cout << "Invalid Calculation! Cannot divide by zero.";
            break;
        default: 
            cout << "Invalid Operator! Use +, -, *, or /.";
    }

    return 0;
}
