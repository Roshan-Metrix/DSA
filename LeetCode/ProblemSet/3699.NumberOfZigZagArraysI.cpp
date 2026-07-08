class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        // Length 1: every value is valid
        if (n == 1)
            return m;

        // up[i]   = number of arrays ending at value i
        //           where the last move was UP
        // down[i] = number of arrays ending at value i
        //           where the last move was DOWN
        vector<long long> up(m, 0), down(m, 0);

        // Initialize for arrays of length 2
        for (int i = 0; i < m; i++) {
            // To end at i with an UP move,
            // previous value must be smaller than i
            up[i] = i;

            // To end at i with a DOWN move,
            // previous value must be greater than i
            down[i] = m - i - 1;
        }

        // Build arrays of length 3 to n
        for (int len = 3; len <= n; len++) {

            vector<long long> prefUp(m), prefDown(m);

            prefUp[0] = up[0];
            prefDown[0] = down[0];

            for (int i = 1; i < m; i++) {
                prefUp[i] = (prefUp[i - 1] + up[i]) % MOD;
                prefDown[i] = (prefDown[i - 1] + down[i]) % MOD;
            }

            vector<long long> newUp(m, 0), newDown(m, 0);

            for (int i = 0; i < m; i++) {

                // Last move becomes UP:
                // previous move must be DOWN and previous value < i
                if (i > 0)
                    newUp[i] = prefDown[i - 1];

                // Last move becomes DOWN:
                // previous move must be UP and previous value > i
                newDown[i] =
                    (prefUp[m - 1] - prefUp[i] + MOD) % MOD;
            }

            up = move(newUp);
            down = move(newDown);
        }

        long long ans = 0;

        // For n = 2, up/down already contain all valid arrays
        // For n >= 3, they contain the final states as well
        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return (int)ans;
    }
};