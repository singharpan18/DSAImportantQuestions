/*
Find the Longest consecutive sequence length.
Input: Enter number of elements: 6
Enter elements: 100 4 200 1 3 2
Output: Longest consecutive sequence length = 4
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int> &arr){
    unordered_set<int> s(arr.begin(), arr.end());// // Using unordered_set to remove duplicates and allow O(1) lookup
    int longest = 0;
    for(int num : s){
        if(!s.count(num -1)){//count is a set method return 1->exists, 0->not exists//Start counting only if previous number NOT present. 
            //example 100 -> 100 must be taken in longest conseutive sequence  if 99 not exist in set
            int current = num;
            int length = 1;
            // Purpose: count consecutive numbers
            while(s.count(current + 1)){
                current++;
                length++;
            }    
            longest = max(longest, length);      
        }        
    }
    return longest;
}

int longestConsecutive2(vector<int>& arr){

    if(arr.size() == 0)
        return 0;

    sort(arr.begin(), arr.end());

    int longest = 1;
    int count = 1;

    for(int i = 1; i < arr.size(); i++){

        if(arr[i] == arr[i-1])
            continue;

        else if(arr[i] == arr[i-1] + 1){
            count++;
        }
        else{
            count = 1;
        }

        longest = max(longest, count);
    }

    return longest;
}

bool linearSearch(vector<int>& arr, int target){
    for(int num : arr){
        if(num == target)
            return true;
    }
    return false;
}

int longestConsecutive3(vector<int>& arr){
    int longest = 0;

    for(int i = 0; i < arr.size(); i++){

        int x = arr[i];
        int count = 1;

        while(linearSearch(arr, x + 1)){
            x++;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}


int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector <int> arr(n);
    cout << " Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = longestConsecutive(arr);

    cout << "Longest consecutive sequence length = " << result << endl;
    return 0;

}
/*
| Method        | Time       | Space |
| ------------- | ---------- | ----- |
| Brute Force   | O(n²)      | O(1)  |
| Sorting       | O(n log n) | O(1)  |
| Unordered Set | O(n)       | O(n)  |
*/
