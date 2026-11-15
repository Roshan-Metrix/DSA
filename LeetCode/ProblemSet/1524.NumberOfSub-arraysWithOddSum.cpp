
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;

        long long even = 1;
        long long odd = 0;
        long long count = 0;

        int prefix = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefix = (prefix + arr[i]) % 2;
            if (prefix == 1) {
                count = (count + even) % MOD;
                odd++;
            }
            else {
                count = (count + odd) % MOD;
                even++;
            }
        }
        return count;
    }
};