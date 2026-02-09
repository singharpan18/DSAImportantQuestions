// Question: Find total trapped rain water between buildings
// Input: height = {0,1,0,2,1,0,1,3,2,1,2,1}
// Output: 6
#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {

    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while(left < right) {
        if(height[left] < height[right]) {
            leftMax = max(leftMax, height[left]);
            water += leftMax - height[left];
            left++;
        } else {
            rightMax = max(rightMax, height[right]);
            water += rightMax - height[right];
            right--;
        }
    }
    return water;
}


int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped Water = " << trap(height);
}
/*
✅ Time Complexity (TC): O(n)
Each element is visited at most once using two pointers.

✅ Space Complexity (SC): O(1)
Only variables are used. No extra array.
*/
