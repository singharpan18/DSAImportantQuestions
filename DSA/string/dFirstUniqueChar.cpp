/*Question meaning:
Find the first character that appears only once.
Example: s = "leetcode" Output = 0   ('l') */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int firstUniqChar(string s) {
    vector<int> freq(26, 0);

    // Step 1: Count frequency of each character
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Step 2: Find first unique character
    int index = 0;
    for (char c : s) {
        if (freq[c - 'a'] == 1) {
            return index;
        }
        index++;
    }

    // Step 3: If no unique character found
    return -1;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    int result = firstUniqChar(s);

    if (result != -1)
        cout << "First unique character index: " << result << endl;
    else
        cout << "No unique character found" << endl;

    return 0;
}