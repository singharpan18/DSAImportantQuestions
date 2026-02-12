/*
Given an integer array nums containing n + 1 integers where each integer is between 1 and n (inclusive), return the duplicate number.
Assumptions: Only one duplicate exists, Duplicate may appear more than once
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i - 1])
            return nums[i];
    }

    return -1;
}

int findDuplicate2(vector<int>& nums) {

    unordered_set<int> seen;

    for(int num : nums) {
        if(seen.count(num))
            return num;

        seen.insert(num);
    }

    return -1;
}


int main() {

    vector<int> nums = {1, 3, 4, 2, 2};

    int duplicate = findDuplicate(nums);

    cout << "Duplicate number is: " << duplicate << endl;

    return 0;
}
/*
✅ Time Complexity: Sorting → O(n log n), Traversal → O(n), Total → O(n log n)
✅ Space Complexity: O(1)   (Ignoring sorting internal memory)
❌ Drawback: Array gets modified

✅ Time Complexity: Insertion + lookup → O(1), Total → O(n)
✅ Space Complexity: O(n)

*/