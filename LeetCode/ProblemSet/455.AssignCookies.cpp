class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0, count = 0;
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                count += 1;
                i += 1;
            }
            j += 1;
        }
        return count;
    }
};