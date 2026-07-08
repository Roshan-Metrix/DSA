// - The find() function searches for a substring and returns its starting position if found.
// - If the substring is not found, it returns std::string::npos.

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        string t = word;
        int x = sequence.size()/word.size();
        for(int k=1;k<=x;++k){

        }
    }
}

int main(){
    string sequence = "ababc";
    string word = "ab";
    Solution sol;
    cout << maxRepeating(sequence,word); // 2
}