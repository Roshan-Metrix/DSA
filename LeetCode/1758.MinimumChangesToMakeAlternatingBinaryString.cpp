class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int count1 = 0; // pattern starting with '0'
        int count2 = 0; // pattern starting with '1'
        
        for(int i = 0; i < n; i++) {
            // Expected char if pattern starts with '0'
            char expected1 = (i % 2 == 0) ? '0' : '1';
            
            // Expected char if pattern starts with '1'
            char expected2 = (i % 2 == 0) ? '1' : '0';
            
            if(s[i] != expected1)
                count1++;
                
            if(s[i] != expected2)
                count2++;
        }
        
        return min(count1, count2);
    }
};