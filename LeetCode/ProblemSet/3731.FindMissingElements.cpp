class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int> res;
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            for (int x = nums[i - 1] + 1; x < nums[i]; x++) {
                res.push_back(x);
            }
        }

        return res;
    }
};