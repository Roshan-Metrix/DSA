// We use Binary Exponential method to tackle this problem

#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        long long power = n;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        for (int i = 0; i < power; ++i) {
            result *= x;
        }

        return result;
    }
};


int main(){
    double base = 2;
    int power = -3; 
    cout << myPow(base, power);
    return 0;
}