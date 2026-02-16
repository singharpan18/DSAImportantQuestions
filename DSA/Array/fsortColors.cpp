// Question: Sort array of 0s, 1s, and 2s
// Input: [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {

    int low = 0;                 // Purpose: boundary for 0s
    int mid = 0;                 // Purpose: current index
    int high = nums.size() - 1;  // Purpose: boundary for 2s

    while(mid <= high) {

        if(nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
            // Purpose: move 0 to left region
        }
        else if(nums[mid] == 1) {
            mid++;  
            // Purpose: 1 is already in correct region
        }
        else {
            swap(nums[mid], nums[high--]);
            // Purpose: move 2 to right region
        }
    }
}

int main() {

    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/
