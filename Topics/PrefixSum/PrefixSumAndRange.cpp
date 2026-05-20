#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {2, 4, 1, 7, 3};
    int n = arr.size();

    vector<int> prefix(n);

    // Build prefix sum array
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Query sum from L to R
    int L = 1, R = 3;

    int rangeSum;

    if(L == 0)
        rangeSum = prefix[R];
    else
        rangeSum = prefix[R] - prefix[L - 1];

    cout << "Range Sum = " << rangeSum;
}