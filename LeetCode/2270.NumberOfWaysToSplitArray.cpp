class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        long long prefix = 0;
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            prefix += nums[i];

            if (prefix >= total - prefix) {
                count++;
            }
        }

        return count;
    }
};