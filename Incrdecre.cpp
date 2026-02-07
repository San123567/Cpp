#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 5;

    while (num2--) {  
        num1++;  // Increment num1 for every decrement of num2
    }

    cout << "Sum: " << num1 << endl;  // Printing the final value of num1
    return 0;
}
