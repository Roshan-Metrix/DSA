 #include<iostream>
using namespace std;
 
 int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;

    while (numBottles >= numExchange) {
      ans += numBottles / numExchange;
      numBottles = numBottles / numExchange + numBottles % numExchange;
    }

    return ans;
    }

int main(){
   int numBottles = 9;
   int numExchange = 3;
   cout << numWaterBottles(numBottles, numExchange);
}