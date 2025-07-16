#include<iostream>
using namespace std;

// int smallest(int num){
    
// }

// int largest(){

// }

int main(){
    int n;
     cout << "Enter the no. of datas for Array:";
     cin >> n;

     int datas[40];

     cout << "\nEnter " << n << "datas:\n" << endl;
     for(int i=0;i<n;i++){
        cin >> datas[i];
     }
      cout << '\n' << endl;
     for(int i=0;i<n;i++){
        cout << datas[i] << endl ;
     }
     
    //  return smallest(n);
}