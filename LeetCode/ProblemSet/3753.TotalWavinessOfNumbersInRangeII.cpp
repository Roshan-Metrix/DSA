def count_waviness(n):
    s = str(n)
    m = len(s)

    @lru_cache(None)
    def dp(idx, x, y, allow_larger, digit_num):
        ans = 0
        if idx >= m:
            return ans
        if allow_larger:
            for z in range(10):
                if z == 0 and digit_num == 0:
                    ans += dp(idx + 1, y, z, True, 0)
                elif digit_num >= 2 and x > y and z > y:
                    ans += 10 ** (m - 1 - idx) + dp(idx + 1, y, z, True, digit_num + 1)
                elif digit_num >= 2 and x < y and z < y:
                    ans += 10 ** (m - 1 - idx) + dp(idx + 1, y, z, True, digit_num + 1)
                else:
                    ans += dp(idx + 1, y, z, True, digit_num + 1)
        else:
            upper_bound = int(s[idx])
            for z in range(upper_bound + 1):
                if z == 0 and digit_num == 0:
                    ans += dp(idx + 1, y, z, True, 0)
                elif digit_num >= 2 and x > y and z > y:
                    if z == upper_bound:
                        remain = int(s[idx + 1:]) + 1 if idx + 1 < m else 1
                        ans += remain + dp(idx + 1, y, z, False, digit_num + 1)
                    else:
                        ans += 10 ** (m - 1 - idx) + dp(idx + 1, y, z, True, digit_num + 1)
                elif digit_num >= 2 and x < y and z < y:
                    if z == upper_bound:
                        remain = int(s[idx + 1:]) + 1 if idx + 1 < m else 1
                        ans += remain + dp(idx + 1, y, z, False, digit_num + 1)
                    else:
                        ans += 10 ** (m - 1 - idx) + dp(idx + 1, y, z, True, digit_num + 1)
                else:
                    ans += dp(idx + 1, y, z, z < upper_bound, digit_num + 1)
        return ans

    ans = dp(0, 0, 0, False, 0)
    return ans


class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        return count_waviness(num2) - count_waviness(num1 - 1)
