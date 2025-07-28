#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> name = { 'a', 'b'};
    cout << "size = " << name.size()<<endl;
    name.push_back('m');
    cout << "size = " << name.size()<<endl;
    name.pop_back();
    cout << "size = " << name.size();
    
    return 0;
}