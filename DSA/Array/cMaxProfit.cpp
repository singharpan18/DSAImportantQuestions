// Question: Max profit with one buy & one sell
// Input: [7,1,5,3,6,4]
// Output: 5
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices){
    int minPrice = prices[0];   // Purpose: lowest buying price so far
    int maxProfit = 0;          // Purpose: best profit found

    for(int i = 1; i < prices.size(); i++) {

        // Purpose: update minimum buying price
        minPrice = min(minPrice, prices[i]);

        // Purpose: profit if sold today
        int profitToday = prices[i] - minPrice;

        // Purpose: update best profit
        maxProfit = max(maxProfit, profitToday);
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int result = maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}

/*
TC: O(n)
SC: O(1)
*/
