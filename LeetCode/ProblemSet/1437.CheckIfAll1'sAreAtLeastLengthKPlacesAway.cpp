#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int j = -(k + 1);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                if (i - j - 1 < k) {
                    return false;
                }
                j = i;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,0,0,1,0,1};
    int k = 2;
    cout << (sol.kLengthApart(nums, k) ? "true" : "false") << endl;
    return 0;
}