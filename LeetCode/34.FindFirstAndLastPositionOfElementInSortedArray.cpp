#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

// binary search with lower_bound 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int r = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();
        if (l == r) {
            return {-1, -1};
        }
        return {l, r - 1};
    }
};

// Binary Search with mid
// class Solution {
// public:
//     vector<int> searchRange(const vector<int>& nums, int target) {
//         int left = findLeft(nums, target);
//         int right = findRight(nums, target);
//         return {left, right};
//     }

// private:
//     int findLeft(const vector<int>& nums, int target) {
//         int l = 0, r = (int)nums.size() - 1, ans = -1;
//         while (l <= r) {
//             int m = l + (r - l) / 2;
//             if (nums[m] >= target) {
//                 if (nums[m] == target) ans = m;
//                 r = m - 1;
//             } else {
//                 l = m + 1;
//             }
//         }
//         return ans;
//     }

//     int findRight(const vector<int>& nums, int target) {
//         int l = 0, r = (int)nums.size() - 1, ans = -1;
//         while (l <= r) {
//             int m = l + (r - l) / 2;
//             if (nums[m] <= target) {
//                 if (nums[m] == target) ans = m;
//                 l = m + 1;
//             } else {
//                 r = m - 1;
//             }
//         }
//         return ans;
//     }
// };

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = sol.searchRange(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl; // [3,4]
    return 0;
}