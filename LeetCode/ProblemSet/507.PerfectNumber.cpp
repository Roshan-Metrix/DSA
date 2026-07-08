#include<iostream>
using namespace std;

class Solution{
    public:
   bool checkPerfectNumber(int num) {
       int originalNum = num;
       int newNum = 0;
        for(int i=1; i<num; ++i){
            if(num % i == 0) newNum += i;
        }
       bool result = (newNum == originalNum) ? true : false;
       return result;
 }
};

int main(){
  int num = 28;
  Solution sol;
  cout << sol.checkPerfectNumber(num) << endl;
  return 0;
}