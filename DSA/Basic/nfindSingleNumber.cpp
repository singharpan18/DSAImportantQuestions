// Question: In an array where every number appears twice except one, find that single number
// Input: arr = {2, 3, 2, 4, 4}
// Output: 3
#include <iostream>
#include <vector>
using  namespace std;

int findMissingNumber(const vector<int> &arr){
    int result = 0;
    for(int num : arr){
        result ^= num;
    }
    return result;
}

int main(){
    vector<int> arr = {2, 3, 2, 4, 4};
    cout << "single number " << findMissingNumber(arr) << endl;
    return 0;
}
/*
Time Complexity (TC): O(n)
- Single pass over array.

Space Complexity (SC): O(1)
- Only one variable used.
*/
