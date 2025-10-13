#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isAnagram(const string& a, const string& b) {
    if (a.size() != b.size()) return false;
    string sa = a, sb = b;
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());
    return sa == sb;
}

vector<string> removeAnagrams(vector<string>& words) {
    vector<string> result;
    for (const string& word : words) {
        if (result.empty() || !isAnagram(result.back(), word)) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};
    vector<string> output = removeAnagrams(words);
    for (const string& word : output)
        cout << word << " "; // { "abba" , "cd"}
    return 0;
}
