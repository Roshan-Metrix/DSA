class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums.front() && nums[i] < nums.back()) {
                count++;
            }
        }
        return count;
    }
};
