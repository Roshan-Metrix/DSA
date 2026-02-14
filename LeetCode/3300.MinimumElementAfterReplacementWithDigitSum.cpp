class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int vec: nums){
            int sum = 0;
            if(vec >= 10){
                while(vec > 0){
                int rem = vec % 10;
                sum += rem;
                vec /= 10;
            }
            mini = min(mini, sum);
            }else {
                mini = min(mini,vec);
            }
        }
        return mini;
    }
};