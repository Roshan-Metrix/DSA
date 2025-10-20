#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        for(string op : operations){
            if(op == "--X" || op == "X--"){
                sum -= 1;
            }else{
                sum += 1;
            }
        }
        return sum;
    }
};

int main(){
    Solution sol;
    vector<string> operations = {"--X","X++","X++"};
    cout << sol.finalValueAfterOperations(operations) << endl; // Output: 1
    return 0;
}