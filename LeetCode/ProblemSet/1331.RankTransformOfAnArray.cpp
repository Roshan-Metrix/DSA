class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
         unordered_map<int, int> mp;
         int i = 1;
         for(int n : sorted){
            mp[n] = i++; 
         }
         vector<int> res;
         for(auto& it : arr){
            res.push_back(mp[it]);
         }
         return res;
    }
};