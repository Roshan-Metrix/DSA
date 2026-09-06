class Solution {
private:
    int f(int i, int j, string s, string t, vector<vector<int>> &dp){
     if(j == 0) return 1;
     if(i == 0) return 0;
     if(dp[i][j] != -1) return dp[i][j];
        if(s[i-1] == t[j-1]){
            return dp[i][j] = f(i-1, j-1, s, t, dp) + f(i-1, j, s, t, dp);
        }
        return dp[i][j] = f(i-1, j, s, t, dp);
}
public:
    int numDistinct(string s, string t) {
       int n = s.size();
       int m = t.size();
       vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
       return f(n, m, s, t, dp);
    }
};