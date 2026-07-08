// Difference between unsigned and signed
// - A 32-bit unsigned int can store values from 0 to 4,294,967,295.
// - A 32-bit signed int can store values from -2,147,483,648 to 2,147,483,647.

 #include<iostream>
using namespace std;

int mySqrt(int x) {
    unsigned l = 1;
    unsigned r = x + 1u;

    while (l < r) {
      const unsigned m = (l + r) / 2;
      if (m > x / m)
        r = m;
      else
        l = m + 1;
    }

    return l - 1;
    }

int main(){
     int x=4;
     cout << mySqrt(x);
}