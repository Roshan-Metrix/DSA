#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<vector<int>>> nums = {{{1,2,3},{4,5,6}},{{7,8,9},{0,5,6}}};

    for(const vector<vector<int>>& row : nums){
      for(const vector<int>& rowInside : row){
        for(const int ch : rowInside){  
            cout << ch << " ";
        }
        cout << endl;
     }
    cout << endl;
    } 
    return 0;
}