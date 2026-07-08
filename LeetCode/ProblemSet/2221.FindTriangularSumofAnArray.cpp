#include <iostream>
#include <vector>
using namespace std;

int triangularSum(vector<int> &nums)
{
    for (int sz = nums.size(); sz > 0; --sz)
    {
        for (int i = 0; i + 1 < sz; ++i)
        {
            nums[i] = (nums[i] + nums[i + 1]) % 10;
        }
    }
    return nums[0];
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << triangularSum(nums);
}