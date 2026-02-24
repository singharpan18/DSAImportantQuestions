#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string frequencySort(string s) {
    vector<int> f(256, 0);

    // Count frequency using ASCII value
    for (char c : s)
        f[c]++;

    vector<pair<int, char>> arr;
    for (int i = 0; i < 256; i++) {
        if (f[i] > 0)
            arr.push_back({f[i], (char)i});
    }

    // Sort by frequency descending
    sort(arr.begin(), arr.end(), greater<>());

    string result = "";
    for (auto p : arr) {
        result.append(p.first, p.second);
    }

    return result;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << frequencySort(s);
    return 0;
}