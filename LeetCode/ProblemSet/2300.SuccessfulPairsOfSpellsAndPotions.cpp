#include<iostream>
#include<vector>

using namespace std;

class Solution {
 public:
  vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                              long long success) {
    vector<int> ans;
    ranges::sort(potions);

    for (const int spell : spells)
      ans.push_back(potions.size() -
                    firstIndexSuccess(spell, potions, success));

    return ans;
  }

 private:
  // Returns the first index i s.t. spell * potions[i] >= success.
  int firstIndexSuccess(int spell, const vector<int>& potions, long success) {
    int l = 0;
    int r = potions.size();
    while (l < r) {
      const int m = (l + r) / 2;
      if (static_cast<long>(spell) * potions[m] >= success)
        r = m;
      else
        l = m + 1;
    }
    return l;
  }
};

int main(){
    vector<int> spells = {2,3,4};
    vector<int> potions = {4,5,6};
    long long success = 7;

  vector<int> result = successfulPairs(spells, potions,
                              success);
  for(int res : result){
    cout << res << ' ';
  }
  return 0;

}