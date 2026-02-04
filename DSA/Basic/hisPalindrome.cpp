// Question: Check if a string is a palindrome
// Input: s = "racecar"
// Output: true
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome( string &s){
    int left = 0, right = s.size() -1;
    while(left < right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    string s = "racecar";
    cout << (isPalindrome(s) ? "Palindrome" : "not palindrome") << endl;

    string s2 = "hello";
    cout << (isPalindrome(s2) ? "Palindrome" : "not palindrome") << endl;

}
/*
Time Complexity (TC): O(n)
- Check each pair once.

Space Complexity (SC): O(1)
- No extra space.
*/
