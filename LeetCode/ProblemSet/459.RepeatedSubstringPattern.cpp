#include<iostream>
using namespace std;

class Solution{
    public:
    bool repeatedSubstringPattern(string s){
        return (s+s).find(s,1) < s.size();
    }
};

int main(){
    string s = "abab";
    Solution sol;
    cout << sol.repeatedSubstringPattern(s);
}