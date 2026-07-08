#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.empty())
        return true;

        int m = s.size(), n = t.size();
        int i = 0, j = 0;
        for (j=0; i < m && j < n; ++j) {
            if (s[i] == t[j]) {
                ++i;
            }
        }
        return i == m;
    }
};

int main(){
    string s = "abc";
    string t = "ahbgdc"; 
    Solution sol;
    cout << sol.isSubsequence(s,t); //true
}