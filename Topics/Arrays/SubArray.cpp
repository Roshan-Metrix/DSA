#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    
for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = i; k <= j; k++){
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}


// Output

// 1 12 123 1234 12345 
// 2 23 234 2345
// 3 34 345
// 4 45
// 5


