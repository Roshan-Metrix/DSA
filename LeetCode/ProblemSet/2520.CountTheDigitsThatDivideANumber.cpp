#include<iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
       int count = 0;
       int n = num;
        while(n > 0){
            int rem = n % 10;
            if(num % rem == 0) count++;
            n /= 10;
        }
        return count;
    }
};

int main(){
    int num = 121;
    Solution sol;
    cout << sol.countDigits(num) << endl; // 2 
    return 0;
}