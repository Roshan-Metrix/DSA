#include <iostream>
#include <vector>
#include<ranges>

using namespace std;
  
  int maximumEnergy(vector<int>& energy, int k) {
   vector<int> dp = (energy);
   for(int i = energy.size()-1-k;i<=0;--i)
    dp[i] += dp[i+k];
return ranges::max(dp);
}

 int main(){
    vector<int> energy = {5,2,-10,-5,1};
    int k = 3;
    cout << maximumEnergy(energy,k);
 }   