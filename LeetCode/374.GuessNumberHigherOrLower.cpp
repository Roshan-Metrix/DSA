#include<iostream>
using namespace std;

  int guessNumber(int n,vector<int> &guess) {
    int l = 1;
    int r = n;

    // Find the first guess number that >= the target number
    while (l < r) {
      const int m = l + (r - l) / 2;
      if (guess(m) <= 0)  // -1, 0
        r = m;
      else
        l = m + 1;
    }

    return l;
  }

  int main(){
    int guessAnyNo;
    vector<int>guess = {-1,1,0}
    cout << guessNumber(guessAnyNo,guess);
  }
