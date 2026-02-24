/*Valid Anagram
Two strings have the same characters with the same frequency, order doesn’t matter.
Example: s = "anagram" t = "nagaram" */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool areAnagrams(string& s1, string& s2) {
    if (s1.size() != s2.size())
        return false;

    vector<int> freq(26, 0);

    for (char c : s1)
        freq[c - 'a']++;

    for (char c : s2) {
        freq[c - 'a']--;
    if (freq[c - 'a'] < 0)
            return false;
    }
    return true;
}    


int main() {

    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (areAnagrams(s1, s2))
        cout << "The strings are Anagrams" << endl;
    else
        cout << "The strings are NOT Anagrams" << endl;

    return 0;
}