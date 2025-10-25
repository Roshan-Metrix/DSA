#include<iostream>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int fullWeeks = n / 7;
        int remainingDays = n % 7;
        int sum = 0;

        for (int i = 0; i < fullWeeks; i++) {
            sum += (7 * (2 * (1 + i) + 6)) / 2;
        }
        for (int i = 0; i < remainingDays; i++) {
            sum += (1 + fullWeeks) + i;
        }

        return sum;
    }
};

int main() {
    Solution sol;
    int n = 20; 
    cout << "Total money after " << n << " days: " << sol.totalMoney(n) << endl;
    return 0;
}