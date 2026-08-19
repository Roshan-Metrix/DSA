#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<arr.size();i++){
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;
}

