// Question: Reverse an array in-place
// Input: arr = {1, 2, 3, 4, 5}
// Output: arr = {5, 4, 3, 2, 1}
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr){
    int left = 0, right = arr.size()-1;
    while(left < right){
        swap(arr[left], arr[right]);
        left ++;
        right --;
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for(int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
/*
Time Complexity (TC): O(n/2) ~ O(n)
- Only one pass over half of array elements.

Space Complexity (SC): O(1)
- Reversed in-place using two pointers.
*/
