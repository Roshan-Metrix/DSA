#include<iostream>
#include<vector>
using namespace std;

 int romanToInt(string s) {
        int ans = 0;
        vector<int> roman(128);
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        for(int i = 0; i+1 < s.length(); ++i){
            if(roman[s[i]] < roman[s[i + 1]]){
                ans -= roman[s[i]];
            }else{
                ans += roman[s[i]];
            }
        }
        ans += roman[s.back()];
        return ans;
    }

int main(){
    string roman;
    cout << "Enter roman no:" ;
    cin >> roman;
    cout << roman << ":" << romanToInt(roman) << endl;
}

