#include<iostream>
using namespace std;

int reverseDatas(int noOfDatas,int records[]){
    
}

int main(){
      int n, num;
    cout << "Enter the no. of datas for Array:";
    cin >> n;

    int datas[n];
    cout << "\nEnter " << n << " datas:\n";
    for (int i = 0; i < n; i++){
        cin >> datas[i];
    }
    cout << "The reverse datas is " << reverseDatas(n,datas);
}