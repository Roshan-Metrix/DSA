
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// Binary Search
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while (low < high) {
            int mid = low + (high- low) / 2;
            if (isBadVersion(mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};


// Linear Search
int firstBadVersion(int n) {
    for (int i = 1; i <= n; ++i) {
        if (isBadVersion(i)) {
            return i;  // First bad version found
        }
    }
    return -1;  // Should never reach here if there's at least one bad version
}

