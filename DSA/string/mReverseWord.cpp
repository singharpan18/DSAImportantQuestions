#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    //Reverse the entire string  input: "  hello   world  " → output: "  dlrow   olleh  "
    reverse(s.begin(),s.end());
    //Use two pointers, i → reads characters, j → writes clean output into the same string, So we overwrite the string in place.
    int i = 0, j = 0;
    int n = s.size();
    while(i < n){
        //Skip unnecessary spaces, Ignore leading spaces, Ignore multiple spaces between words, This ensures we only process real words.
        while(i < n && s[i] == ' ') i++;
        if(i >= n) break;
        //Add space ONLY between words
        if (j > 0) s[j++] = ' ';
        int start = j;
        //copy the word
        while (i < n && s[i] != ' ')
            s[j++] = s[i++];
        //Fix word orientation, dlrow → world
        reverse(s.begin() + start, s.begin() + j);

    }
    //Delete leftover garbage characters, Keep only the valid rebuilt sentence
    s.resize(j);
    return s;
}

int main() {
    string s;
    cout << "Enter the strings: ";
    getline  (cin, s) ;
    cout << reverseWords(s);
    return 0;
}