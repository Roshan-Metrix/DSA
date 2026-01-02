// Using STL
int repeatedNTimes(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) return num;  // Found duplicate
        seen.insert(num);
    }
    return -1;
}

// Without Using STL (mathematical approach)
int repeatedNTimes(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
            if (i >= 1 && nums[i] == nums[i - 1])
                return nums[i];
            if (i >= 2 && nums[i] == nums[i - 2])
                return nums[i];
    }
        return -1;
    }