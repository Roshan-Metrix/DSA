#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1;
        for (int i = 2; i <= n; ++i) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};


int main() {
    Solution sol;
    int n = 6; 
    cout << "Fibonacci sum of " << n << " is: " << sol.fib(n) << endl;
    return 0;
}