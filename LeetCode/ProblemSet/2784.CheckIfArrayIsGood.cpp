class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.back();

        if(nums.size() != n+1)
            return false;

        for(int i=0; i<n-1; i++){
            if(nums[i] != i+1)
                return false;
        }

        return nums[n-1] == n && nums[n] == n;
    }
};