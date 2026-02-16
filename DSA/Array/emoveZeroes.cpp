// Question: Move all zeros to end (maintain order)
// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {

    int index = 0;  
    // Purpose: position to place next non-zero element

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    // Purpose: fill remaining positions with 0
    while(index < nums.size()) {
        nums[index++] = 0;
    }
}

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}


/*
TC: O(n)
SC: O(1)
*/
