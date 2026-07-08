#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;
        int sub = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0) {
                sum += nums[i];
            } else {
                sub -= nums[i];
            }
        }
        return sum + sub;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 7};
    Solution sol;
    int result = sol.alternatingSum(nums);
    cout << "Alternating sum: " << result << endl;
    return 0;
}