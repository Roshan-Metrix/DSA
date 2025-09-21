#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int ans = 0;
    int j = -1;
    vector<int> lastSeen(128, -1);

    for (int i = 0; i < s.length(); ++i) {
        j = max(j, lastSeen[s[i]]);
        ans = max(ans, i - j);
        lastSeen[s[i]] = i;
    }

    return ans;
}

int main() {
    string str = "abcabcab";
    cout << lengthOfLongestSubstring(str); 
    return 0;
}