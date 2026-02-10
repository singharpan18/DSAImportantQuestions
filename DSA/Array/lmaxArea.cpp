/*
You are given an integer array height.
Each element represents the height of a vertical line drawn at index i.
Find two lines that together with the x-axis form a container that holds the maximum amount of water.
Return the maximum water that can be stored.
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
✅ Explanation: 
height[1] = 8
height[8] = 7
width = distance between indices
height = minimum of both heights
width = 8 - 1 = 7
height = min(8,7) = 7
Water = 7 * 7 = 49
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> &height){
    int left = 0, right = height.size()-1, maxWater = 0;
    while (left < right){
        int width = right - left;
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, width * h);

        if(height[left] < height[right]) left++;
        else right--;
    }
    return maxWater;
}

int main() {

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int result = maxArea(height);

    cout << "Maximum Water Stored: " << result;

    return 0;
}

/*
TC: O(n)
SC: O(1)
✅ Why Two Pointer Works
We start from extreme ends because:
👉 This gives maximum possible width.
Then we try to improve height.
*/