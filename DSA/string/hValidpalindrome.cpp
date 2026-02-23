#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        //Skip Non-Alphanumeric Characters 
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        //Compare Characters (Ignoring Case)
        if (tolower(s[left]) != tolower(s[right]))
            return false;

        left++;
        right--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
}