#include<iostream>
#include <cmath>
using namespace std;

using LL = long;
class Solution {
public:
    int arrangeCoins(int n) {
        LL left = 1, right = n;
        while (left < right) {
            LL mid = left + right + 1 >> 1;
            LL s = (1 + mid) * mid >> 1;
            if (n < s)
                right = mid - 1;
            else
                left = mid;
        }
        return left;
    }
};

// class Solution {
//  public:
//   int arrangeCoins(long n) {
//     return (-1 + sqrt(8 * n + 1)) / 2;
//   }
// };

int main() {
    Solution sol;
    int n = 5;
    cout << sol.arrangeCoins(n) << endl; // Output: 2
    return 0;
}