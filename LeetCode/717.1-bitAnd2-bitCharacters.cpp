#include<iostream>
#include<vector>
using namespace std;

class Solution {
 public:
  bool isOneBitCharacter(vector<int>& bits) {
    const int n = bits.size();

    int i = 0;
    while (i < n - 1)
      if (bits[i] == 0)
        i += 1;
      else
        i += 2;

    return i == n - 1;
  }
};

int main() {
  Solution sol;
  vector<int> bits = {1, 0, 0};
  cout << sol.isOneBitCharacter(bits) << endl; // Output: true
  return 0;
}