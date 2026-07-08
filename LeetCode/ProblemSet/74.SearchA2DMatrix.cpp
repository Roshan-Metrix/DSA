#include<iostream>
#include<vector>
using namespace std;

// Linear Search
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0;i<matrix.size();++i){
//             for(int j=0;j<matrix[i].size();++j){
//                 if(matrix[i][j] == target){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// Binary Search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m * n - 1;
        while (left < right) {
            int mid = left + right >> 1;
            int x = mid / n, y = mid % n;
            if (matrix[x][y] >= target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return matrix[left / n][left % n] == target;
    }
};

int main(){
       vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;
    Solution sol;
    bool found = sol.searchMatrix(matrix, target);
    cout << (found ? "Found" : "Not Found") << endl;
    return 0;
}