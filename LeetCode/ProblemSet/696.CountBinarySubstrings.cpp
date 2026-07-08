class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroup = 0;
        int currGroup = 1;
        int result = 0;
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currGroup++;
            } else {
                result += min(prevGroup, currGroup);
                prevGroup = currGroup;
                currGroup = 1;
            }
        }
        
        // Add the last pair
        result += min(prevGroup, currGroup);
        
        return result;
    }
};
