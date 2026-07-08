#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }
};

int main() {
    Solution sol;
    int n = 27;
    bool result = sol.isPowerOfThree(n);
    cout << result << endl;
    // Expected output: true
    return 0;
}