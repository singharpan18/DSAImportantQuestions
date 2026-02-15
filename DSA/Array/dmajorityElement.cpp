// Question: Find element appearing more than n/2 times
// Input: [2,2,1,1,1,2,2]
// Output: 2
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums){
    int candidate = 0;  // Purpose: possible majority element
    int count = 0;      // Purpose: voting balance

    for(int num : nums) {

        if(count == 0) {
            // Purpose: choose new candidate
            candidate = num;
        }

        // Purpose: vote for same, vote against different
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;

}

int main() {
    vector<int> nums = {2,2,3,1,1,2,2};
    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}

/*
TC: O(n)
SC: O(1)
*/
