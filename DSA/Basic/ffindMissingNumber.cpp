// Question: Find the missing number in array of size n-1 containing 1..n
// Input: arr = {1, 2, 4, 5}, n=5
// Output: 3
#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(const vector<int> &arr, int n){
    int sum = n*(n+1)/2;//sum of 1...n
    int arrSum = 0;
    for(int num : arr) arrSum += num;

    return sum - arrSum;
}

int main(){
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;
    cout << "Missing number = " << findMissingNumber(arr, n) << endl;
}