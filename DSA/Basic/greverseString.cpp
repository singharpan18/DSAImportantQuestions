// Question: Reverse a string in-place
// Input: str = "hello"
// Output: "olleh"
#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s){
    int left = 0, right = s.size()-1;
    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main(){
    string s = "hello";
    reverseString(s);
    cout << s << endl;
    return 0;
}
/*
Time Complexity (TC): O(n)
- Single pass over half the string.

Space Complexity (SC): O(1)
- In-place reversal using two pointers.
*/
