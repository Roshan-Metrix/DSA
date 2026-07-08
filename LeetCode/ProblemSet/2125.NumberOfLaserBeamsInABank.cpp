#include<iostream>
#include<vector>
#include<string>

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, pre = 0;
        for (auto& row : bank) {
            int cur = count(row.begin(), row.end(), '1');
            if (cur) {
                ans += pre * cur;
                pre = cur;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> bank = {"011001","000000","010100","001000"};
    std::cout << sol.numberOfBeams(bank) << std::endl; // Output: 8
    return 0;
}