#include<iostream>
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2) {
                count += num1 / num2;
                num1 %= num2;
            } else {
                count += num2 / num1;
                num2 %= num1;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int num1 = 2, num2 = 3;
    cout << "Count of operations to obtain zero: " << sol.countOperations(num1, num2) << endl;
    return 0;
}