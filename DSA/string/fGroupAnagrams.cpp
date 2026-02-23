/*
Group Anagrams using Frequency Count (Optimized)
Time: O(n × k)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for(string word : strs) {

        vector<int> freq(26, 0);

        for(char c : word) {
            freq[c - 'a']++;
        }

        string key = "";

        for(int count : freq) {
            key += "#" + to_string(count);
        }

        mp[key].push_back(word);
    }

    vector<vector<string>> result;

    for(auto pair : mp) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    cout << "Grouped Anagrams (Optimized):\n";

    for(auto group : ans) {
        for(string word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}