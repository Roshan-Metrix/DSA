class Solution {
public:
    long long sumAndMultiply(int n) {
        int num = 0;
        int sum = 0, p = 1;
        while(n > 0){
            int rem = n % 10;
            if(rem != 0){
                sum += rem;
                num += p * rem;
                p *= 10;
            }
            n /= 10;
        }
        return 1LL * num * sum;
    }
};