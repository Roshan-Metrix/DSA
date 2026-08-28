class Solution {
public:
    string lexPalindromicPermutation(string s, string target) {
        int n = s.size();
        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        int odd = 0;
        char mid = 0;

        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2) {
                odd++;
                mid = 'a' + i;
            }
        }

        if (odd > 1)
            return "";

        for (int i = 0; i < 26; i++)
            cnt[i] /= 2;

        int half = n / 2;
        string left;

        auto possible = [&]() -> bool {
            string temp = left;

            for (int c = 25; c >= 0; c--) {
                temp += string(cnt[c], 'a' + c);
            }

            string pal = temp;

            if (n % 2)
                pal += mid;

            reverse(temp.begin(), temp.end());
            pal += temp;

            return pal > target;
        };

        for (int pos = 0; pos < half; pos++) {
            bool found = false;

            for (int c = 0; c < 26; c++) {
                if (cnt[c] == 0)
                    continue;

                cnt[c]--;
                left.push_back('a' + c);

                if (possible()) {
                    found = true;
                    break;
                }

                left.pop_back();
                cnt[c]++;
            }

            if (!found)
                return "";
        }

        string ans = left;

        if (n % 2)
            ans += mid;

        reverse(left.begin(), left.end());
        ans += left;

        return ans > target ? ans : "";
    }
};