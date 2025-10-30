#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int f = target[0];
        for (int i = 1; i < target.size(); ++i) {
            if (target[i] > target[i - 1]) {
                f += target[i] - target[i - 1];
            }
        }
        return f;
    }
};

int main() {
    Solution sol;
    vector<int> target = {1, 2, 3, 2, 1};
    cout << sol.minNumberOperations(target) << endl; // Output: 3
    return 0;
}