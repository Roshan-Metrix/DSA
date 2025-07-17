// Finding smallest number from array
#include<iostream>
using namespace std;

int smallestNumber(int num,int records[]){
    int min = records[0];
    for(int i=0;i<num;i++){
        if(records[i] < min){
            min = records[i];
        }
    }
    return min;
}

int main(){
    int n;
     cout << "Enter the no. of datas for Array:";
     cin >> n;

     int datas[n];
     cout << "\nEnter " << n << " datas:\n" << endl;
     for(int i=0;i<n;i++){
        cin >> datas[i];
     }
    cout << "Smallest Among them is "<< smallestNumber(n, datas);
    return 0;
}