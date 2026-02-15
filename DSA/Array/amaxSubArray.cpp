// Question: Find maximum sum of a contiguous subarray
// Input: [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6  -> [4,-1,2,1]
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums){
    int currSum = nums[0];
    int maxSum = nums[0];

    for(int i=1; i<nums.size(); i++){
        // Either extend previous subarray OR start new from nums[i]
        currSum = max(nums[i], currSum+nums[i]);
        // Purpose: update global best answer
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main() {

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;
    return 0;
}

/*
TC: O(n) → single traversal
SC: O(1) → no extra space
*/
