#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> s(nums.begin(), nums.end());
        
        while (s.count(original)) {
            original *= 2;
        }
        
        return original;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 3, 6, 1, 12};
    int original = 3;
    cout << sol.findFinalValue(nums, original) << endl; // Output: 24
    return 0;
}