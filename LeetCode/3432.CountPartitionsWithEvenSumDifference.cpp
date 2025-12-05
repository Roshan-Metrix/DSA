class Solution {
public:
    int countPartitions(vector<int>& nums) {
 return accumulate(nums.begin(), nums.end(), 0) % 2 == 0
        ? nums.size() - 1: 0;
    }
};