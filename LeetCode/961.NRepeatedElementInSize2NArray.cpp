// Using STL
int repeatedNTimes(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) return num;  // Found duplicate
        seen.insert(num);
    }
    return -1;
}
