#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }
};

int main() {
    Solution sol;
    int n = 16;
    bool result = sol.isPowerOfFour(n);
    // Expected output: true
    return 0;
}