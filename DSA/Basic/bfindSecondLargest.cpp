// Question: Find the second largest element in an array without sorting
// Input: arr = {10, 5, 20, 20, 8}
// Output: 10 (largest is 20)
#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int findSecondLargest(const vector<int> &arr){
    if(arr.size() < 2) return -1;

    int largest = INT_MIN;
    int second = INT_MIN;

    for(int num : arr){
        if(num > largest){
            second = largest;
            largest = num;
        } else if( num != largest && num > second){
            second = num;
        }
    }
    if(second == INT_MIN) return -1;
    return second;
}

int main(){
    vector<int> arr = {10, 5, 20, 20, 8};
    int result = findSecondLargest(arr);
    cout << "second largest = "  << result << endl;
    return 0;
}
/*
Time Complexity (TC): O(n)
- Single pass through the array.

Space Complexity (SC): O(1)
- Only two variables (largest, second) used; no extra data structures.
*/
