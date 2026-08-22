class Solution {
public:
    bool checkDivisibility(int n) {
        int plus = 0;
        int prod = 1;
        int x = n;
        while(x != 0){
            int rem = x % 10;
            plus += rem;
            prod *= rem;
            x /= 10;
        }
        return n % (plus + prod) == 0;
    }
};