// Question: Find first non-repeating character
// Input: s = "swiss"
// Output: w
#include <iostream>
#include <vector>
using namespace std;

char firstNonRepeating(string &s){
    vector<int> f(26, 0);

    for(char c : s){
        c = tolower(c);
        if(c >= 'a' && c <= 'z'){
            f[c - 'a']++;
        }
    }

    int index = 0;
    for (char c : s) {
        if (f[c - 'a'] == 1) {
            return c;
        }
        index++;
    }

    return '?';
}

int main(){
    string s;

    cout << "Enter string: ";
    cin >> s;

    char result = firstNonRepeating(s);

    if (result != '?')
        cout << "First unique character : " << result << endl;
    else
        cout << "No unique character found" << endl;

    return 0;
}
/*
Time Complexity (TC): O(n)
- Count frequency + scan string again.

Space Complexity (SC): O(k)
- k = number of unique characters.
*/
