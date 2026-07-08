#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while (columnNumber > 0) {
            columnNumber--;
            int remainder = columnNumber % 26;
            char current_character = 'A' + remainder;
            result = current_character + result;
            columnNumber = columnNumber / 26;
        }
        return result;
    }
};

int main() {
    Solution sol;
    int columnNumber = 28;
    cout << "Excel Column Title for " << columnNumber << " is: " << sol.convertToTitle(columnNumber) << endl;
    return 0;
}