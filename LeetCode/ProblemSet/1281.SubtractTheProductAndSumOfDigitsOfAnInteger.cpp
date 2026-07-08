#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem, product = 1, sum = 0;
        while(n != 0){
            rem = n % 10;
            product *= rem;
            sum += rem;
            n /= 10;
        }
        return (product-sum);
    }
};

int main(){
    int n = 234;
    Solution sol;
    cout << sol.subtractProductAndSum(n); // 15
}