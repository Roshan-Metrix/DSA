#include<iostream>
#include<string>
using namespace std;
  
int main(){
	int T;
    cin >> T;
    while(T--){
    	string word;
    	cin >> word;
    	int len = word.length();
    	if(len <= 10) {
    		cout << word << endl;
		}else {
    	char f = word[0];
    	char l = word[len-1];
    	cout << f << len - 2 << l << endl;
    }
	}
   return 0;
}