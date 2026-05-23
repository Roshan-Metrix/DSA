class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            count += nums[i] > (nums[(i + 1) % n]);
        }
        return count <= 1;
    }
};