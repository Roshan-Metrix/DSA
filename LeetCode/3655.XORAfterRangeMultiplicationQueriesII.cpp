class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        vector<long long> res(n);
        for (int i = 0; i < n; ++i)
            res[i] = nums[i];

        int B = (int)sqrt(n) + 1;
        for (const auto& q : queries) {
            int l = q[0], r = q[1], k = q[2], v = q[3];
            if (k > B) {
                for (int idx = l; idx <= r; idx += k) {
                    res[idx] = (res[idx] * v) % MOD;
                }
            }
        }

        unordered_map<int, vector<vector<int>>> small_by_k;
        for (const auto& q : queries) {
            int l = q[0], r = q[1], k = q[2], v = q[3];
            if (k <= B) {
                small_by_k[k].push_back({l, r, v});
            }
        }

        for (const auto& entry : small_by_k) {
            int k = entry.first;
            const auto& qlist = entry.second;

            vector<vector<int>> pos(k);
            for (int i = 0; i < n; ++i) {
                pos[i % k].push_back(i);
            }

            // For each residue class
            for (int r = 0; r < k; ++r) {
                const auto& vec = pos[r];
                if (vec.empty())
                    continue;
                int m = vec.size();
                vector<long long> diff(m + 1, 1LL);
                for (const auto& qry : qlist) {
                    int l = qry[0], rbound = qry[1], v = qry[2];
                    if (l % k != r)
                        continue;

                    int L =
                        lower_bound(vec.begin(), vec.end(), l) - vec.begin();
                    int R = upper_bound(vec.begin(), vec.end(), rbound) -
                            vec.begin() - 1;
                    if (L <= R) {
                        // Modular inverse of v
                        long long inv = 1, base = v, exp = MOD - 2;
                        while (exp) {
                            if (exp & 1)
                                inv = inv * base % MOD;
                            base = base * base % MOD;
                            exp >>= 1;
                        }
                        diff[L] = diff[L] * v % MOD;
                        diff[R + 1] = diff[R + 1] * inv % MOD;
                    }
                }

                // Prefix product to get the factor for each index
                long long prod = 1;
                for (int i = 0; i < m; ++i) {
                    prod = prod * diff[i] % MOD;
                    res[vec[i]] = res[vec[i]] * prod % MOD;
                }
            }
        }

        // Compute final XOR
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            ans ^= (int)res[i];
        }
        return ans;
    }
};