#include<iostream>
#include<vector>
#include<string>
using namespace std;
	
int main(){
	string text = "roshan";
	vector<int> cnt(26,0);
	
	// count the no. of letters
	for(char ch : text){
		cnt[ch - 'a']++;
	}
	
	// display the no. of letter 
	for(int ch : cnt){
		cout << ch << " ";
	}
	
	// display alphabet
	cout << "\n";
	cout << char(65); // A same as 66 -> B , 67 -> C and so on
	cout << "\n";
	cout << char(97); // a  same as 98 -> b, 99 -> c and so on
	
	// char -> int   // gives ASCII value
	// int -> char   // gives character
}
