#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        bool negative = (dividend > 0) ^ (divisor > 0);

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long result = 0;

       
        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            result += multiple;
        }

        result = negative ? -result : result;

        return result > INT_MAX ? INT_MAX : result;
    }
};

int main() {
    Solution sol;
    int dividend = 10, divisor = 3;
    cout << sol.divide(dividend, divisor) << endl; // Output: 3
    return 0;
}
