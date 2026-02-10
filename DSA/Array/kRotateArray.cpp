/*You are given an integer array nums and an integer k.
Rotate the array to the right by k steps.
Rotation means shifting elements to the right, and elements that fall off the end should come back to the beginning.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int> &arr, int k){

    k = k % arr.size(); // handle large k

    reverse(arr.begin(), arr.end());            // Reverse whole array
    reverse(arr.begin(), arr.begin() + k);      // Reverse first k
    reverse(arr.begin() + k, arr.end());        // Reverse rest
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    rotateArray(arr, k);

    cout << "Rotated array: ";
    for(int num : arr){
        cout << num << " ";
    }
}

/*
✅ Time Complexity O(n) Because each reverse takes linear time.
✅ Space Complexity O(1) No extra memory used.
Input: nums = [1,2], k = 3
Output: [2,1]
Array size = 2
k = 3
k % size → 3 % 2 = 1-> if we rotate it three times output will same 
*/
