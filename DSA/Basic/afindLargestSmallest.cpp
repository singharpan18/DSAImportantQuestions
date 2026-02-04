// Question: Find the largest and smallest element in a given array
// Input: arr = {3, 5, 1, 2, 4}
// Output: Largest = 5, Smallest = 1

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findLargestSmallest(const vector<int>& arr){

    if(arr.empty()) return{-1, -1};

    int largest = arr[0], smallest = arr[0];

    for(int i=0; i<arr.size(); i++){
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }

    return {largest, smallest};
}

int main(){
    vector<int> arr = {3, 5, 1, 2, 4};
    pair<int, int> res = findLargestSmallest(arr);
    cout << "Largest = " << res.first << " , Smallest = " << res.second << endl;
    return 0;
}
/*
Time Complexity (TC): O(n)
- We traverse the array only once (single loop over n elements).

Space Complexity (SC): O(1)
- Only two extra variables (largest, smallest) are used regardless of array size.
*/
