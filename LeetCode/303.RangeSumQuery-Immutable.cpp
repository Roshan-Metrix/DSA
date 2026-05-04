class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n+1);
        for(int i =  0; i < nums.size(); i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefix[right+1] - prefix[left];
    }

    private:
      vector<int> prefix;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */