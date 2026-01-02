
// Mathematical Approach
class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int mn = INT_MAX, mx = INT_MIN;
        long long sum = 0;

        for (int s : salary) {
            sum += s;
            mn = min(mn, s);
            mx = max(mx, s);
        }

        sum -= mn;
        sum -= mx;

        return (double)sum / (n - 2);
    }
};

// Sorting Approach
class Solution {
public:
    double average(vector<int>& salary) {
        return (accumulate(salary.begin(), salary.end(), 0.0) 
        - *min_element(salary.begin(), salary.end()) 
        - *max_element(salary.begin(), salary.end())) 
        / (salary.size() - 2);

    }
};