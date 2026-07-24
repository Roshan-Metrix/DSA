class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;   // peak is to the right of mid
            } else {
                high = mid;      // mid could be the peak, so keep it in range
            }
        }
        return low;  // low == high == peak index
    }
};