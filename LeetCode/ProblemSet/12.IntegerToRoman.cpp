#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
    public:
     string intToRoman(int num){
        vector<string> cs = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> vs = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans;
        for(int i=0;i<cs.size(); ++i){
            while(num >= vs[i]){
                num -= vs[i];
                ans += cs[i];
            }

        }
        return ans;
     }
};

int main(){
  int num = 10;
  Solution sol;
  cout << sol.intToRoman(num);
  return 0;
}