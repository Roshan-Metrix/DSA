#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> output;
    int n = nums.size();

    for (int i = 0; i <= n - k; i++)
    {
        int maxi = nums[i];
        for (int j = i; j < i + k; j++)
        {
            maxi = max(maxi, nums[j]);
        }
        output.push_back(maxi);
    }

    return output;
}

int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}