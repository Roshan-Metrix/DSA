#include<iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int x = 1;
        while (x - 1 < n) {
            x <<= 1;
        }
        return x - 1;
    }
};

int main() {
    Solution sol;
    int n = 5;
    cout << "Smallest number with all set bits for n = " << n << " is: " << sol.smallestNumber(n) << endl;
    return 0;
}