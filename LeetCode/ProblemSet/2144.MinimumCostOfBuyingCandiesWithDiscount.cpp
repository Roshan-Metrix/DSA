class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int result = 0;
        for (int i = 0; i < cost.size(); i++) {
            // Every 3rd candy is free
            if ((i + 1) % 3 != 0) {
                result += cost[i];
            }
        }
        return result;
    }
};
