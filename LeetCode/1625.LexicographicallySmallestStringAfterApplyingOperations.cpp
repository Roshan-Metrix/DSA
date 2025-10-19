#include<iostream>
#include<string>
#include<queue>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        string res = s;
        queue<string> q;
        q.push(s);
        unordered_set<string> visited;
        visited.insert(s);

        while(!q.empty()){
            string curr = q.front();
            q.pop();
            res = min(res, curr);

            // Operation 1: Add
            string add_s = curr;
            for(int i = 1;i<add_s.length(); i+=2){
                add_s[i] = ((add_s[i] - '0' + a) % 10) + '0';
            }
            if(visited.find(add_s) == visited.end()){
                visited.insert(add_s);
                q.push(add_s);
            }
            // Operation 2 : Rotate
            string rotate_s = curr;
            int n = s.length();
            rotate(rotate_s.begin(), rotate_s.begin() + n - b, rotate_s.end());
            if(visited.find(rotate_s) == visited.end()){
                visited.insert(rotate_s);
                q.push(rotate_s);
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    string s = "5525";
    int a = 9, b = 2;
    cout << sol.findLexSmallestString(s, a, b) << endl; // Expected output: "2050"
    return 0;
}