#include<iostream>
#include<vector>
#include<stack> 
using namespace std;

class Solution {
 public:
  int minOperations(vector<int>& nums) {
    int ans = 0;
    stack<int> stack;
    stack.push(0);

    for (const int num : nums) {
      while (!stack.empty() && stack.top() > num)
        stack.pop();
      if (stack.empty() || stack.top() < num) {
        ++ans;
        stack.push(num);
      }
    }

    return ans;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {1, 5, 0, 3, 5};
  cout << sol.minOperations(nums) << endl; // Output: 3
  return 0;
}