// nCr factorial problem . 

#include<iostream>
using namespace std;

// Funtion to calculate factorial
int fact(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact *= i;
	}
	return fact;
}

// Function for nCr
int func(int n, int r){
	int fact_n = fact(n);
	int fact_r = fact(r);
	int fact_nmr = fact(n-r);
	int nCr = fact_n / (fact_r*fact_nmr);
	return nCr;
}

int main(){
   cout << func(6,3);
   return 0;
}
