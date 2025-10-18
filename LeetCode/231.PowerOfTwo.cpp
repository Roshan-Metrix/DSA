#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    Solution sol;
    int n = 16;
    if (sol.isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }
    return 0;
}