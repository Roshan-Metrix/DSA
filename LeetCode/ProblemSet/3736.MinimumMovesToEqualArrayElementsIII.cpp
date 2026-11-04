class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n  = nums.size();
        int s = 0;
        int mx = 0;
        for(int x : nums){
            mx = max(mx, x);
            s += x;
        }
        return mx * n - s;
    }
};