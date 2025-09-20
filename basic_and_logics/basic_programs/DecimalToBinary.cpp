 #include<iostream>
 #include<math.h>
 using namespace std;

 int main(){
    int power = 0 , decimal, binary=0;
    // Taking input for decimal number
    cout << "Enter Decimal Number : ";
    cin >> decimal;
    int dec = decimal;

    while(decimal > 0){
       int rem = decimal % 2;
       binary += rem*pow(10,power);
       decimal /= 2;
       power++;
    }

    cout << "Binary no. of " << dec << " base ten : " << binary << endl;
 }