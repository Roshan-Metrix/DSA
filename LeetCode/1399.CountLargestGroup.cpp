class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> cnt;

        // Count how many numbers belong to each digit-sum group
        for (int i = 1; i <= n; i++) {
            int num = i;
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            cnt[sum]++;
        }

        // Find the largest group size
        int maxSize = 0;
        for (auto &it : cnt) {
            maxSize = max(maxSize, it.second);
        }

        // Count how many groups have the largest size
        int ans = 0;
        for (auto &it : cnt) {
            if (it.second == maxSize)
                ans++;
        }

        return ans;
    }
};