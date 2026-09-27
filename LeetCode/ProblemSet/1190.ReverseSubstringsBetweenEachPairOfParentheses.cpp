class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        for(char& c : s){
            if(c == ')'){
                string t;
                while(ans.back() != '('){
                    t.push_back(ans.back());
                    ans.pop_back();
                }
                ans.pop_back();
                ans += t;
            } else {
                ans.push_back(c);
            }
        }
        return ans;
    }
};