class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = 0; i < 10; i++) {
             int temp = n;
             int prod = 1;
            while (temp > 0) {
                int rem = temp % 10;
                prod *= rem;
                temp /= 10;
            }
            if (prod % t == 0) return n;
            n++;
        }
        return 0;
    }
};