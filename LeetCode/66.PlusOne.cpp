#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
     for (int i = digits.size() - 1; i >= 0; --i) {
                if (digits[i] < 9) {
                    ++digits[i];
                    return digits;
                }
                digits[i] = 0;
            }

            digits.insert(digits.begin(), 1);
            return digits;
}

int main() {
    vector<int> nums = {1,2,3};
    vector<int> result = plusOne(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}


