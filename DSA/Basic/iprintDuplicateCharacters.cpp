// Question: Find duplicate characters in a string
// Input: s = "programming"
// Output: r, g, m
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void printDuplicateCharacters(string &s){
    unordered_map<char, int> freq;
    for(char c : s) freq[c]++;

    for(auto &p : freq){
        if(p.second > 1) cout << p.first << " " << endl;
    }
}

void printDuplicateCharactersWithFrequency(string &s){
        vector<int> f(26, 0);

    // Count frequency (convert to lowercase)
    for (char c : s) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            f[c - 'a']++;
        }
    }

    // Print duplicate characters
    bool found = false;
    for (int i = 0; i < 26; i++) {
        if (f[i] > 1) {
            cout << char(i + 'a') << " -> " << f[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No duplicate characters found!" << endl;
    }

}

int main(){
    string s = "programming";
    printDuplicateCharacters(s);
    printDuplicateCharactersWithFrequency(s);
    return 0;
}
/*
Time Complexity (TC): O(n)
- Single pass to count frequency.

Space Complexity (SC): O(k)
- k = number of unique characters (hashmap).
*/

