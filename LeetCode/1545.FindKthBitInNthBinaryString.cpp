class Solution {
public:
    char findKthBit(int n, int k) {
        // Base case
        if (n == 1) return '0';
        
        int length = (1 << n) - 1;
        int mid = (length / 2) + 1;   // 2^(n-1)
        
        if (k == mid) {
            return '1';
        } 
        else if (k < mid) {
            return findKthBit(n - 1, k);
        } 
        else {
            // Mirror position
            int mirrored = length - k + 1;
            char bit = findKthBit(n - 1, mirrored);
            // Invert the bit
            return (bit == '0') ? '1' : '0';
        }
    }
};