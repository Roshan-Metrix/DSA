#include<iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (char& c : columnTitle) {
            ans = ans * 26 + (c - 'A' + 1);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string columnTitle = "AB";
    cout << sol.titleToNumber(columnTitle) << endl; // Output: 28
    return 0;
}