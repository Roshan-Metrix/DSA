class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
      while(n > 0){
        int rem = n % 10;
        v.push_back(rem);
        n /= 10;
      }
      int size = v.size();
      sort(v.begin(),v.end());
      int res = v[size - 1] * v[size - 2];
      return res;
    }
};