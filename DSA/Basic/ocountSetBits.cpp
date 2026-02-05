// Question: Count number of set bits (1s) in binary representation
// Input: n = 13 (1101)
// Output: 3
#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n) {
        n = n & (n - 1); // Removes last set bit
        count++;
    }
    return count;
}

int main() {
    int n = 13;
    cout << "Number of set bits = " << countSetBits(n) << endl;
    return 0;
}
/*
Time Complexity (TC): O(k)
- k = number of set bits. Efficient than O(log n).

Space Complexity (SC): O(1)
- Only counter used.
*/
/*
When you subtract 1 from a number:
👉 The rightmost 1 becomes 0
👉 All bits after it become 1

Iteration 1
1101
&
1100
----
1100

Iteration 2
1100
&
1011
----
1000

Iteration 3
1000
&
0111
----
0000

*/
