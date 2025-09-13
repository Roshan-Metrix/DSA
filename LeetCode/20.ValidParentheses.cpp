#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (const char c : s) {
            if (c == '(')
                stack.push(')');
            else if (c == '{')
                stack.push('}');
            else if (c == '[')
                stack.push(']');
            else if (stack.empty() || pop(stack) != c)
                return false;
        }

        return stack.empty();
    }

private:
    char pop(stack<char>& stack) {
        char c = stack.top();
        stack.pop();
        return c;
    }
};

int main() {
    string bracket = "[]";
    Solution sol;
    cout << boolalpha << sol.isValid(bracket) << endl;
}