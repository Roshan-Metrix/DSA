class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l < r) {
            int currSum = nums[l] + nums[r];
            if (currSum == target) {
                return {l+1, r+1};
            } else if (currSum < target) {
                l++;
            } else {
                r--;
            }
        }
        return {};
    }
};