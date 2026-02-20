#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

string longestSubstring(string s) {
    vector<int> freq(256, 0);

    int left = 0;
    int maxLen = 0;
    int start = 0;   // To store starting index of longest substring

    for (int right = 0; right < s.size(); right++) {

        freq[s[right]]++;

        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        // If we found a longer substring
        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
            start = left;  // update start
        }
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Longest Substring Without Repeating Characters: "
         << longestSubstring(s) << endl;

    return 0;
}