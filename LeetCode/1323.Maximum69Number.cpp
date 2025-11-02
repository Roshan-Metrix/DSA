#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);
        for (char& ch : s) {
            if (ch == '6') {
                ch = '9';
                break;
            }
        }
        return stoi(s);
    }
};

int main() {
    Solution sol;
    int num = 9669;
    cout << "Maximum 69 Number: " << sol.maximum69Number(num) << endl; // Output: 9969
    return 0;
}