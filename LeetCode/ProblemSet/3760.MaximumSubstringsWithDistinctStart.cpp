class Solution {
public:
    int maxDistinct(string s) {
        set<char> unique(s.begin(), s.end());
        return unique.size();
    }
};