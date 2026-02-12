// Question: Merge nums2 into nums1 as one sorted array (in-place)
// nums1 = {1,2,3,0,0,0}, m = 3
// nums2 = {2,5,6}, n = 3
// Output: {1,2,2,3,5,6}
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int i = m - 1;          // Purpose: pointer to last valid element in nums1
    int j = n - 1;          // Purpose: pointer to last element in nums2
    int k = m + n - 1;      // Purpose: position to place largest element

    // Purpose: compare from back and place the bigger element at the end
    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }

    // Purpose: copy remaining nums2 elements if any
    while(j >= 0) {
        nums1[k--] = nums2[j--];
    }
}


int main() {

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for(int num : nums1)
        cout << num << " ";

    return 0;
}

/*
TC: O(m + n) → each element processed once
SC: O(1) → in-place merge
*/
