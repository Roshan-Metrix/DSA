#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> f(n, 1);
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                f[j] += f[j - 1];
            }
        }
        return f[n - 1];
    }
};

int main() {
    Solution sol;
    int m = 3, n = 7;
    cout << "Number of unique paths in a " << m << "x" << n << " grid: " << sol.uniquePaths(m, n) << endl;
    return 0;
}