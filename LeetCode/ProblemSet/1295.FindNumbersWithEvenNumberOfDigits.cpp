class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for (int vec : nums) {
            if (vec >= 10) {
                int count = 0;
                while (vec > 0) {
                    int rem = vec % 10;
                    count++;
                    vec /= 10;
                }
                if (count % 2 == 0) {
                    even++;
                }
            }
        }
        return even;
    }
};