// Question: Swap two numbers without using extra variable
// Input: a = 5, b = 10
// Output: a = 10, b = 5

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    a = a + b;
    b = a - b; // b becomes original a
    a = a - b; // a becomes original b
}

int main() {
    int a = 5, b = 10;
    swapNumbers(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

/*
Time Complexity (TC): O(1)
- Constant time arithmetic operations.

Space Complexity (SC): O(1)
- No extra memory used.
*/
