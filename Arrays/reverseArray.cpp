#include<iostream>
using namespace std;

// Logic To Reverse Datas Of Arrays

void reverseDatas(int noOfDatas,int records[]){
    int temp;
    for(int i=0;i<noOfDatas;i++){
        for(int j=i+1;j<noOfDatas;j++){
            temp = records[i];
            records[i] = records[j];
            records[j] = temp;
        }
    }
    for(int i=0;i<noOfDatas;i++){
           cout << records[i] << ' ';
    }
}

// Main function
 
int main(){
      int n;
    cout << "Enter the no. of datas for Array:";
    cin >> n;

    int datas[n];
    cout << "\nEnter " << n << " datas:\n";
    for (int i = 0; i < n; i++){
        cin >> datas[i];
    }
    cout << "The reverse datas is ";
     reverseDatas(n, datas);
}