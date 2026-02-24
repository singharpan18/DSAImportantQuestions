#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

// Find all duplicate characters
void Countfrequency(string s) {
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

int main() {
    cout << "Hello Arpan, Be your own sparkles!!" << endl;

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Allows spaces in input
    Countfrequency(s);

    return 0;
}