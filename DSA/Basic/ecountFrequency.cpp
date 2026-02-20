// Question: Count frequency of each element in an array
// Input: arr = {1, 2, 2, 3, 3, 3}
// Output: 1->1, 2->2, 3->3
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void countFrequency(const vector<int> &arr){
    unordered_map<int, int> freq;
    for(int num : arr) freq[num]++;

    for(auto &p : freq){
        cout << p.first << "->" <<p.second << endl;
    }
}

void countFrequency2(vector<int> &arr){
    if(arr.empty()) return ;

    sort(arr.begin(), arr.end());
    int count = 1;
    for(int i=1; i<arr.size(); i++){
        if(arr[i] == arr[i-1]) count++; else{
            cout << arr[i-1] << " -> " << count << endl;
            count = 1;
        }
    }
    //print the last element
    cout << arr.back() << " -> " << count << endl;
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    countFrequency(arr);
    countFrequency2(arr);
    return 0;
}

/*
Time Complexity (TC): O(n)
- Traverse array once and increment counts in hashmap.

Space Complexity (SC): O(n)
- HashMap stores all unique elements.
*/
/*Complexity 
TC: O(n log n) (due to sorting)

SC: O(1) (ignoring sort space)

*/
/*⚡ Performance Difference
Case	    Copy Created?	Can Modify Original?	Faster?
auto p	    ✅ Yes	            ❌ No	        ❌ Slightly slower
auto &p	    ❌ No	            ✅ Yes	        ✅ Faster*/


