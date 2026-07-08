// Greedy

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> trailing(n);
        
        // Step 1: Count trailing zeros for each row
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = n - 1; j >= 0; j--) {
                if (grid[i][j] == 0)
                    count++;
                else
                    break;
            }
            trailing[i] = count;
        }
        
        int swaps = 0;
        
        // Step 2: Greedy placement
        for (int i = 0; i < n; i++) {
            int required = n - 1 - i;
            int j = i;
            
            // Find the first row that satisfies the requirement
            while (j < n && trailing[j] < required) {
                j++;
            }
            
            // If no valid row found
            if (j == n) return -1;
            
            // Bring row j up to position i using adjacent swaps
            while (j > i) {
                swap(trailing[j], trailing[j - 1]);
                swaps++;
                j--;
            }
        }
        
        return swaps;
    }
};