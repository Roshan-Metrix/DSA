# Selection Sort in C++

This document explains the Selection Sort algorithm and provides a sample implementation in C++.

## Video Explanation

[Watch on YouTube](https://www.youtube.com/watch?v=9oWd4VJOwr0&list=PLjuNEWpkTZauDAstircLx0B-tsERPsjtT&index=8)

## Selection Sort Algorithm

Selection Sort is a simple comparison-based sorting algorithm. It repeatedly selects the minimum element from the unsorted part and moves it to the beginning.

### C++ Implementation

```cpp
#include <iostream>
using namespace std;

void sortNumbers(int arr[], int n) {
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
}

int main() {
    int arr[] = {7, 4, 10, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 

    sortNumbers(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## Output

```
Sorted array: 1 3 4 7 8 10 
```

## References

- [Selection Sort - GeeksforGeeks](https://www.geeksforgeeks.org/selection-sort/)
- [Selection Sort - Wikipedia](https://en.wikipedia.org/wiki/Selection_sort)