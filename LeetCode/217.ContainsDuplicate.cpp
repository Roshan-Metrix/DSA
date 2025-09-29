
#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> seen;

    for (const int num : nums)
      if (!seen.insert(num).second)
        return true;

    return false;
}

int main(){
    vector<int> nums={1,2,3,1};
    cout << containsDuplicate(nums);
}