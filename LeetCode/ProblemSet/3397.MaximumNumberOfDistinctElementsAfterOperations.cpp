#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

class Solution {
public: 
    int maxDistinctElements(vector<int>& nums, int k){
    sort(nums.begin(),nums.end());
    int distinctCount = 0, prevMax = INT_MIN;

    for(int num : nums){
        int lowerBound = num - k;
        int upperBound = num + k;

        if(prevMax < lowerBound){
            prevMax = lowerBound;
            distinctCount++;
        }else if(prevMax < upperBound){
            prevMax++;
            distinctCount++;
        }
    }
    return distinctCount;
    }
};



// class Solution {
// public:
//     int maxDistinctElements(vector<int>& nums, int k) {
//         unordered_set<int> distinctElements;
//         for (int num : nums) {
//             distinctElements.insert(num);
//         }
        
//         int distinctCount = distinctElements.size();
//         int n = nums.size();
        
//         // The maximum number of distinct elements cannot exceed the total number of elements
//         return min(distinctCount + k, n);
//     }
// };

int main() {
    Solution solution;
    vector<int> nums = {4, 4, 4, 4};
    int k = 2;
    int result = solution.maxDistinctElements(nums, k);
    cout << "Maximum number of distinct elements after operations: " << result << endl; // 3
    return 0;
}


// Input: nums = [1,2,2,3,3,4], k = 2
// Output: 6
// Explanation:
// nums changes to [-1, 0, 1, 2, 3, 4] after performing operations on the first four elements.