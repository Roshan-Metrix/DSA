#include<iostream>
#include<vector>
using namespace std;

 int maxArea(vector<int>& height) {
         int ans = 0;
    int l = 0;
    int r = height.size() - 1;

    while (l < r) {
      const int minHeight = min(height[l], height[r]);
      ans = max(ans, minHeight * (r - l));
      if (height[l] < height[r])
        ++l;
      else
        --r;
    }

    return ans;
    }

    int main(){
        // vector<int> height = {1,8,6,2,5,4,8,3,7};
        vector<int> height = {1,6,2,5,4,3};
        cout << maxArea(height);
    }