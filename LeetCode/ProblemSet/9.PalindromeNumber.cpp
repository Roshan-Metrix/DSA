#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x) {
    int check = x;
    long sum = 0;
    if (x < 0) return false;

        while(x != 0){
            int rem = x % 10;
            sum = sum*10+rem;
            x /= 10;
        }
        if(check == sum) return true;
        else return false;
    }

int main(){
    cout << isPalindrome(121) << endl;
}

// 0 -> false
// 1 -> true