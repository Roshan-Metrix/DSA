#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(n)
class Solution{
    public:
     int maximumProfit(vector<int> prices){
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for(int i = 1; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
     }
};

int main(){
    Solution S;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int res = S.maximumProfit(prices); //output : 5
    cout << res;
    return 0;
}