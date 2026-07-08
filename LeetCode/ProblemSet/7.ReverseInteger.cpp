#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
            while(x != 0){
            if (ans < INT_MIN / 10 || ans > INT_MAX / 10) {
                return 0;
            }
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int x = 123;
    int result = sol.reverse(x);
    cout << "Reversed integer of " << x << " is " << result << endl;
    return 0;
}