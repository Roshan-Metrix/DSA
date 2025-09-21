#include <iostream>
#include <vector>
using namespace std;

// O(n^2) - Selection Sort Method

void sortNumbers(vector<int>& arr) {  
      int n = arr.size();  

    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
     cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};   

    sortNumbers(arr);

    return 0;
}
