// Finding smallest number from array
#include<iostream>
using namespace std;

// Finding smallest number
int smallestNumber(int num,int records[]){
    int min = records[0];
    for(int i=0;i<num;i++){
        if(records[i] < min){
            min = records[i];
        }
    }
    return min;
}
 // Finding largest number
int largestNumber(int num,int records[]){
    int max = records[0];
    for(int i=0;i<num;i++){
        if(records[i] > max){
            max = records[i];
        }
    }
    return max;
}
 
// Main fuction to call smallest and largest function
int main(){
    int n;
     cout << "Enter the no. of datas for Array:";
     cin >> n;

     int datas[n];
     cout << "\nEnter " << n << " datas:\n" << endl;
     for(int i=0;i<n;i++){
        cin >> datas[i];
     }
     cout << '\n' ;
    cout << "Smallest Among them is "<< smallestNumber(n, datas) << endl;
    cout << "largest Among them is "<< largestNumber(n, datas) << endl;
    return 0;
}