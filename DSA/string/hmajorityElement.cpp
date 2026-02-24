#include<iostream>
#include<vector>
using namespace std;

char majorityElement(string s){
    int n = s.size();
    vector<int> freq(26, 0);
    for(char c : s ){
        freq[c - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(freq[i] > n/2){
            return char(i + 'a');
        }
    }
    return '?';
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s ;
    char result = majorityElement(s);
    if(result != '?')
        cout << "Majority character is: " << result << endl;
    else
        cout << "No majority character found" << endl;
    return 0;        
}