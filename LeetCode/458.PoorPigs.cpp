class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int base = minutesToTest / minutesToDie + 1;
        int result = 0;
        for (int p = 1; p < buckets; p *= base){
            ++result;
        }
        return result;
    }
};