#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 25;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    a = a ^ b; // Step 1: XOR operation
    b = a ^ b; // Step 2: Get original 'a' value
    a = a ^ b; // Step 3: Get original 'b' value

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
