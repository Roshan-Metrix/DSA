class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> cnt(26, 0);

        // Count characters
        for (char ch : text) {
            cnt[ch - 'a']++;
        }

        // 'l' and 'o' are needed twice
        return min({
            cnt['b' - 'a'],
            cnt['a' - 'a'],
            cnt['l' - 'a'] / 2,
            cnt['o' - 'a'] / 2,
            cnt['n' - 'a']
        });
    }
};