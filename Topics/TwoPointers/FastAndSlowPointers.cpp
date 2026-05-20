#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int slow=0,fast=0;
    while(fast<n && arr[slow]==arr[fast]){
        fast++;
    }
    cout<<arr[slow]<<" "<<(fast-slow)<<endl;
    slow=fast;
    while(fast<n){
        if(arr[slow]==arr[fast]){
            fast++;
        }
        else{
            cout<<arr[slow]<<" "<<(fast-slow)<<endl;
            slow=fast;
        }
    }
    cout<<arr[slow]<<" "<<(fast-slow)<<endl;
}