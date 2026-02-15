// Question: Find indices of two numbers that sum to target
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++){
        // Purpose: number required to reach target a+b = target, b = target-a
        int need = target - nums[i];
        if(mp.count(need)){
            // Purpose: found pair
            return {mp[need], i};
        }
        // Purpose: store current number for future use
        mp[nums[i]] = i;
    }
    return {};
}

int main() {

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if(result.size() == 2) {
        cout << "Indices: " << result[0] << " , " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}

/*
TC: O(n)
SC: O(n) → hashmap
*/
/*
mp[nums[i]] means number
i means index of that number
and map stores it as {number : index}
here we are playing wid indexes as we need to return index
*/