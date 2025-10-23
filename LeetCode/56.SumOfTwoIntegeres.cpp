#include<iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};

int main() {
    Solution sol;
    int a = 5, b = 3;
    cout << "Sum of " << a << " and " << b << " is: " << sol.getSum(a, b) << endl;
    return 0;
}
