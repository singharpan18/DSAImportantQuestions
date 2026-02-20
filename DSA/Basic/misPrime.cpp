// Question: Check if a number is prime
// Input: n = 17
// Output: true
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false; // 0 and 1 are not prime
    if(n == 2) return true;  // 2 is prime
    if(n % 2 == 0) return false; // Even numbers >2 not prime

    for(int i=3; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }

    return true;

}


int main(){
    int n = 17;
    cout << (isPrime(n) ? "Prime" : "Not Prime");
    return 0;
}

/*
Time Complexity (TC): O(sqrt(n))
- Only need to check divisors up to sqrt(n).

Space Complexity (SC): O(1)
- No extra space.
*/
