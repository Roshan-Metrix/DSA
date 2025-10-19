#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> vs;
        for (int v : nums) vs.push_back(to_string(v));
        sort(vs.begin(), vs.end(), [](string& a, string& b) {
            return a + b > b + a;
        });
        if (vs[0] == "0") return "0";
        string ans;
        for (string v : vs) ans += v;
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,30,34,5,9};
    cout << sol.largestNumber(nums) << endl; // Output: "9534330"
    return 0;
}