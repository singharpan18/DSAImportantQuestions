// Question: Count subarrays whose sum equals k
// Input: nums = {1,2,3}, k = 3
// Output: 2 → [1,2], [3]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {

    unordered_map<int,int> mp;  // Purpose: stores prefixSum → count
    mp[0] = 1;                  // Purpose: handles subarray starting at index 0

    int prefixSum = 0;
    int count = 0;

    for(int num : nums) {
        prefixSum += num;       // Purpose: cumulative sum till current index

        // Purpose: check if subarray with sum k exists
        if(mp.count(prefixSum - k))
            count += mp[prefixSum - k];

        mp[prefixSum]++;        // Purpose: store current prefixSum
    }
    return count;
}

int main() {

    vector<int> nums = {1, 2, 3};
    int k = 3;

    cout << subarraySum(nums, k);

    return 0;
}

/*
TC: O(n)
SC: O(n) → hashmap
*/
