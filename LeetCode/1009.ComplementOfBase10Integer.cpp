class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 1;
        while(mask <= n){
            mask <<= 1;
        }
        return (mask - 1) ^ n;
    }
};