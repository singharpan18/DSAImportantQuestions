#include <iostream>
using namespace std;

void reverseString(string &s) {
    int left = 0,  right = s.size() - 1;

    while(left < right){
        swap(s[left], s[right]);
            left++;
            right--;    
    }
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    reverseString(s);
    cout << s;
    return 0;
}