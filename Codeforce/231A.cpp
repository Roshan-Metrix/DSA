#include<iostream>
#include<vector>
using namespace std;
  
int main(){
	int n;
	cin >> n;
	vector<vector<int>> nums(n, vector<int>(3));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> nums[i][j];
		}
	}
	
	int res = 0;
	for(int i = 0; i < n; i++){
		int count = 0;
	for(int j = 0; j < 3; j++){
			if(nums[i][j] == 1){
				count++;
			}
		}
		if(count >= 2){
			res++;
		}
	}
	
	cout << res;
    return 0;
}