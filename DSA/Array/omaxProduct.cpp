/*Problem Statement — Maximum Product Subarray
Input: nums = [2, 3, -2, 4]
Output: 6, Explanation: Subarray [2, 3] gives maximum product 6.
*/
#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for(int i=1; i<nums.size(); i++){

        if(nums[i] < 0)
            //if nums[i]  is negative swap because multiplying by a negative reverses the product sign, 
            //so the previous maximum can become minimum and vice versa.
            swap(maxProd, minProd);

        maxProd = max(nums[i], nums[i]*maxProd);
        minProd = min(nums[i], nums[i]*minProd);

        result = max(result, maxProd);
    }
    return result;
}

int main() {

    vector<int> nums = {2, 3, -2, 4};

    int answer = maxProduct(nums);

    cout << "Maximum Product Subarray = " << answer << endl;

    return 0;
}

/*
Logic Summary:
minProd  ──► helps create new maxProd by swapping  (if negative comes) 
maxProd  ──► compared with result
result   ──► stores overall best answer
Time Complexity: O(n) 👉 Traverse array once.
Space Complexity: O(1) 👉 Only variables used, no extra memory.
*/