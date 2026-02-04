// Question: Check if an array is sorted in ascending order
// Input: arr = {1, 2, 3, 4, 5}
// Output: true
// Input: arr = {1, 3, 2, 4}
// Output: false
#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int> &arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << (isSorted(arr) ? "sorted" : "not sorted") << endl;
    vector<int> arr2 = {1, 3, 2, 4};
    cout << (isSorted(arr2) ? "sorted" : "not sorted") << endl;
}
/*
Time Complexity (TC): O(n)
- Single pass through the array.

Space Complexity (SC): O(1)
- No extra space used.
*/
