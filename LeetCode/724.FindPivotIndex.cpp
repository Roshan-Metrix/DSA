class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);

        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int total = prefix[n - 1];
        int leftSum = 0, rightSum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                leftSum = 0;
            } else {
                leftSum = prefix[i - 1];
            }

            rightSum = total - prefix[i];
            if (leftSum == rightSum) {
                return i;
            }
        }
        return -1;
    }

private:
    vector<int> prefix;
};