#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int sum = 0;

        for (int num : nums) freq[num]++;
        for (auto& [num, count] : freq)
            if (count % k == 0)
                sum += num * count;

        return sum;
    }
};

int main(){
  vector<int> nums = {4,4,4,1,2,3};
  int target = 3;
  Solution sol;
  cout << sol.sumDivisibleByK(nums,target);
} 