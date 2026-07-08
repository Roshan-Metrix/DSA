#include<iostream>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 1; i <= num; i++) {
            int sum = 0;
            int n = i;
            while(n > 0) {
                sum += n % 10;
                n /= 10;
            }
            if(sum % 2 == 0) count++;
        }
        return count;
    }
};

int main(){
    int num = 30;
    Solution sol;
    cout << sol.countEven(num);
    return 0;
}