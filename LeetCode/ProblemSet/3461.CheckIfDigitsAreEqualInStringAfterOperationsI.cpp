#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        string t = s;
        for (int k = n - 1; k > 1; --k) {
            for (int i = 0; i < k; ++i) {
                t[i] = (t[i] - '0' + t[i + 1] - '0') % 10 + '0';
            }
        }
        return t[0] == t[1];
    }
};

int main() {
    Solution sol;
    string s = "1234";
    cout << (sol.hasSameDigits(s) ? "True" : "False") << endl;
    return 0;
}