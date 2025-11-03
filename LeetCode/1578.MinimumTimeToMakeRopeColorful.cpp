#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalCost = 0;
        int maxTime = neededTime[0];
        
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] == colors[i - 1]) {
                totalCost += min(maxTime, neededTime[i]);
                maxTime = max(maxTime, neededTime[i]);
            } else {
                maxTime = neededTime[i];
            }
        }
        
        return totalCost;
    }
};

int main() {
    Solution sol;
    string colors = "aabbbccde";
    vector<int> neededTime = {1, 2, 3, 4, 5, 1, 2, 1, 1};
    
    int result = sol.minCost(colors, neededTime);
    cout << "Minimum time to make the rope colorful: " << result << endl;
    
    return 0;
}