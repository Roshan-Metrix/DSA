class Solution {
public:
    bool hasAlternatingBits(int n) {
        while (n > 0) {
            int last = n & 1;
            n >>= 1;
            
            if (n > 0 && last == (n & 1)) {
                return false;
            }
        }
        return true;
    }
};
