#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i <= n - k; ++i) {
            unordered_map<int, int> freq;
            vector<int> window(nums.begin() + i, nums.begin() + i + k);

            for (int num : window) {
                freq[num]++;
            }

            vector<pair<int, int>> freqList(freq.begin(), freq.end());
            sort(freqList.begin(), freqList.end(), [](auto& a, auto& b) {
                if (a.second == b.second) return a.first > b.first;
                return a.second > b.second;
            });

            unordered_set<int> topX;
            for (int j = 0; j < freqList.size() && j < x; ++j) {
                topX.insert(freqList[j].first);
            }
            int sum = 0;
            for (int num : window) {
                if (topX.count(num)) sum += num;
            }

            result.push_back(sum);
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 1};
    int k = 3, x = 2;
    vector<int> result = sol.findXSum(nums, k, x);
    for (int sum : result) {
        cout << sum << " ";
    }
    return 0;
}