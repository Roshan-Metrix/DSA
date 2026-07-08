#include<iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};

int main() {
    Solution sol;
    int num = 38;
    int result = sol.addDigits(num);
    // Expected output: 2
    return 0;
}