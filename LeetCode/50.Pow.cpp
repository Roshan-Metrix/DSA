// We use Binary Exponential method to tackle this problem

#include<iostream>
using namespace std;

double myPow(double x, int n) {
    double result = 1;
    long m = 1;
    if(n < 0) {
        x = 1/x;
        m = -m;
    }
   for(int i=1;i<=n;i++){
      result *= x;
   }
   return result;
}

int main(){
    double base = 2;
    int power = 3; 
    cout << myPow(base, power);
    return 0;
}