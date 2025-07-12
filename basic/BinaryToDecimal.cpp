#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int power = 0,binary,decimal=0;
    cout << "Enter binary number : ";
    cin >> binary;
    int bin = binary;
    while(binary > 0){
        int rem = binary % 10;
        decimal += rem*pow(2,power);
        binary /= 10;
        power++;
    }
    cout << "Decimal no. of " << bin << " base two : " << decimal << endl;
}