#include <iostream>
#include <vector>
using namespace std;
 
// Greedy One pass method

 int candy(vector<int>& ratings) {
          int n = ratings.size();
        int res = n;

        int i = 1;
        while (i < n) {
            if (ratings[i] == ratings[i - 1]) {
                i++;
                continue;
            }

            int inc = 0;
            while (i < n && ratings[i] > ratings[i - 1]) {
                inc++;
                res += inc;
                i++;
            }

            int dec = 0;
            while (i < n && ratings[i] < ratings[i - 1]) {
                dec++;
                res += dec;
                i++;
            }

            res -= min(inc, dec);
        }

        return res;
    }

int main(){
    vector<int> ratings={1,0,2};
    cout << candy(ratings);
    return 0;
}