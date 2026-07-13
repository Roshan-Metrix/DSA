#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string symb;
    int ans = 0;
    for(int i = 0; i < n; i++){
    	cin >> symb;
    	if(symb == "X++" || symb == "++X"){
    		ans++;
		}
		if(symb == "--X" || symb == "X--"){
			ans--;
		}
	}
	cout << ans;
    return 0;
}