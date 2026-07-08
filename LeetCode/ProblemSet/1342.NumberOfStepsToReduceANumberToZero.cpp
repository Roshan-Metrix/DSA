#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int divideTime = 0, subTime = 0;
        while(num != 0){
            if(num % 2 == 0){
                num = num / 2;
                divideTime++;
            }else{
                num = num - 1; 
                subTime++;
            }
        }
       return divideTime + subTime;
    }
};

int main(){
    Solution sol;
    int num = 14;
    int result = sol.numberOfSteps(num);
    cout << "Number of steps to reduce " << num << " to zero is: " << result << endl;
    return 0;
}