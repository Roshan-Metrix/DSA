#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
		vector<int> result;
		for(int i = left; i<=right; ++i){
			int num = i;
			bool isSelfDivide = true;
			while(num > 0){
              int rem = num % 10;
			  if(rem == 0 || i % num != 0){
				isSelfDivide = false;
				break;
			  }
			  num /= 10;
			}
			if(isSelfDivide){
				result.push_back(i);
			}
		}
		return result;
    }
};

int main(){
	int left = 47;
	int right = 85;
	Solution sol;
	vector<int> nums = sol.selfDividingNumbers(left,right);
	for(int val : nums){
            cout << val << " ";
		}
}