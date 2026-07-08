#include<iostream>
#include<vector>
using namespace std;

 int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ')
            --i;
        const int lastIndex = i;
        while (i >= 0 && s[i] != ' ')
            --i;

        return lastIndex - i;
    }

int main(){
    string s="Hello World";
    cout << lengthOfLastWord(s);

}