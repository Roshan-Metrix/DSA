#include<iostream>
#include<string>
#include<cctype> // for isalnum() --> to checck  the letter is numeric or not i.e 'a' is ok ; '1' is ok ; but '@' is not ok ;; 
using namespace std;    

bool isPalindrome(string s) {
          int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      while (l < r && !isalnum(s[l]))
        ++l;
      while (l < r && !isalnum(s[r]))
        --r;
      if (tolower(s[l]) != tolower(s[r]))
        return false;
      ++l;
      --r;
    }

    return true;
    }

  int main(){
    string s = "race a car";
    cout << isPalindrome(s);
    return 0;
  }