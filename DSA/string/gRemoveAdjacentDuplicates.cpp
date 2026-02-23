#include <iostream>
#include <string>
using namespace std;
//remove adjacent duplicates
int removeDuplicates(string &s) {
    int j = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[j])
            s[++j] = s[i];
    }
    return j + 1;
}

int main() {
    string s;
    cout << "Enter a sorted string: ";
    cin >> s;

    int newLength = removeDuplicates(s);

    cout << "After removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << s[i];
    }

    cout << "\nLength: " << newLength;
    return 0;
}