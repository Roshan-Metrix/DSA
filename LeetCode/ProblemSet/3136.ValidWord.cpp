class Solution {
public:
    bool isValid(string word) {
        int n = word.length();

        if (n < 3)
            return false;

        bool vowel = false, consonant = false;

        for (char ch : word) {
            if (!isalnum(ch)) {
                return false;
            }
            if (isalpha(ch)) {
                char c = tolower(ch);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    vowel = true;
                } else {
                    consonant = true;
                }
            }
        }
        return vowel && consonant;
    }
};