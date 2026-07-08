 #include<iostream>
 #include<vector>
 using namespace std;
 
 bool isUgly(int n) {
        if (n == 0)
            return false;

        for (const int prime : {2, 3, 5})
            while (n % prime == 0)
                n /= prime;

        return n == 1;
    }

int main(){
    int num=6;
cout << isUgly(num);
}