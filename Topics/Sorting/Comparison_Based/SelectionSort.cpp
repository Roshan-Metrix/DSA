// Time Complexity: O(n2) ,as there are two nested loops.

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0; i<n; i++){
       int min_idx = i;
        for(int j = i+1; j<n ;j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void print(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
   int arr[] = {2,5,1,8,6,4};
   int n = sizeof(arr) / sizeof(arr[0]);
   selectionSort(arr,n);
   print(arr,n);
   return 0;
}