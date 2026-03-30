class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string s1_even = "", s1_odd = "";
        string s2_even = "", s2_odd = "";
        
        for (int i = 0; i < s1.size(); i++) {
            if (i % 2 == 0) {
                s1_even += s1[i];
                s2_even += s2[i];
            } else {
                s1_odd += s1[i];
                s2_odd += s2[i];
            }
        }
        
        sort(s1_even.begin(), s1_even.end());
        sort(s1_odd.begin(), s1_odd.end());
        sort(s2_even.begin(), s2_even.end());
        sort(s2_odd.begin(), s2_odd.end());
        
        return (s1_even == s2_even && s1_odd == s2_odd);
    }
};