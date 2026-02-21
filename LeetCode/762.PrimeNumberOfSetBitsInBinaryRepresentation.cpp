#include <unordered_set>

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        std::unordered_set<int> primes = 
            {2,3,5,7,11,13,17,19,23,29,31};

        int ans = 0;

        for(int i = left; i <= right; i++){
            int count = __builtin_popcount(i);

            if(primes.count(count))
                ans++;
        }

        return ans;
    }
};