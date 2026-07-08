class Solution {
public:
        bool checkOnesSegment(string s) {
            bool seenZero = false;

            for (char c : s) {
                if (c == '0')
                    seenZero = true;
                if (c == '1' && seenZero)
                    return false;
            }

            return true;
    }
};