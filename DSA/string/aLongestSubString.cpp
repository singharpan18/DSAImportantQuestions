/*
Given a string, find length of longest substring without repeating characters.
Input: "abcabcbb"
Output: 3
Explanation: "abc" is longest without repetition.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    // freq = how many times character 'c' is present
    // in the current window [left ... right]
    vector<int> freq(256, 0);
    int left = 0;     // start index of sliding window
    int maxLen = 0;   // stores maximum length found so far
    // right pointer expands the window
    for (int right = 0; right < s.size(); right++) {
        // ❓ WHY increase frequency here?
        // Because s[right] is now included in the window
        // We must record it before checking for duplicates
        freq[s[right]]++;
        // ❓ WHY WHILE and not IF?
        // One removal may not remove the duplicate completely
        // We must keep shrinking until freq[s[right]] becomes 1
        while (freq[s[right]] > 1) {
            // ❓ WHAT are we removing?
            // We remove the character at 'left' from the window
            freq[s[left]]--;
            // ❓ WHY move left?
            // To shrink the window and eliminate duplicates
            left++;
        }
        // ❓ WHY update here?
        // Because now the window has NO duplicates
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string s;
    cout << "Enter the strings: ";
    cin >> s ;
    cout << "Length of Longest Substring Without Repeating Characters: "
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}