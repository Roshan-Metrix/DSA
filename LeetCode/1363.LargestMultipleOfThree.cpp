class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        vector<int> cnt(10, 0);
        int sum = 0;

        for (int d : digits) {
            cnt[d]++;
            sum += d;
        }

        auto removeDigit = [&](int rem, int times) {
            for (int i = 0; i < 10 && times > 0; i++) {
                if (i % 3 == rem) {
                    while (cnt[i] > 0 && times > 0) {
                        cnt[i]--;
                        times--;
                    }
                }
            }
            return times == 0;
        };

        int mod = sum % 3;

        if (mod == 1) {
            if (!removeDigit(1, 1))
                removeDigit(2, 2);
        } else if (mod == 2) {
            if (!removeDigit(2, 1))
                removeDigit(1, 2);
        }

        string result = "";
        for (int i = 9; i >= 0; i--) {
            result.append(cnt[i], '0' + i);
        }

        if (result.empty())
            return "";
        if (result[0] == '0')
            return "0";

        return result;
    }
};