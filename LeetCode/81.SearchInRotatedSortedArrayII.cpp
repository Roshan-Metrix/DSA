#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (nums[mid] > nums[r]) {
                if (nums[l] <= target && target <= nums[mid]) {
                    r = mid;
                } else {
                    l = mid + 1;
                }
            } else if (nums[mid] < nums[r]) {
                if (nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            } else {
                --r;
            }
        }
        return nums[l] == target;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    bool result = sol.search(nums, target);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}