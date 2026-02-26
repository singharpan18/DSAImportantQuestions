#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

string removeVowels(string s) {
    int left = 0,  right = s.size() - 1;
    string result = "";
    while(left < right){
        if(!isVowel(s[left]))
            result += s[left];
        if(left != right && !isVowel(s[right]))
            result += s[right];
        left++;
        right--;  
    } 
    return result;     
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << removeVowels(s);
    return 0;
}