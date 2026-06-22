/* Bubble Sort */
#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
vector<int> bubbleSort(vector<int> nums){
	int n = nums.size(); 
	bool swapped;
	for(int i = 0; i < n - 1; ++i){
		swapped = false;
		for(int j = 0; j < n - i - 1; ++j){
			if(nums[j] > nums[j+1]){
				swap(nums[j],nums[j+1]);
				swapped = true;
			}	
		}
		if(!swapped) break;
	}
	return nums;
  }
};

int main(){
	vector<int> nums = {64,34,25,12,22,11,90};
	Solution sol;
	for(int val : sol.bubbleSort(nums)){
		cout << val << " ";
	}
	return 0;
}