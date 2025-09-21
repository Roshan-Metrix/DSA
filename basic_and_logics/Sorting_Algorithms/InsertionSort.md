# Insertion Sort in C++

This document explains the Insertion Sort algorithm and provides a sample implementation in C++.

## Video Explanation

[Watch on YouTube](https://www.youtube.com/watch?v=yCxV0kBpA6M)

---

## Insertion Sort Algorithm

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort or mergesort.

**Steps:**
1. Start from the second element (index 1).
2. Compare the current element with the elements before it.
3. Shift all elements greater than the current element to one position ahead.
4. Insert the current element at its correct position.
5. Repeat until the array is sorted.

---

## C++ Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void sortNumbers(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        // Shift elements of arr[0..i-1], that are greater than temp, to one position ahead
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortNumbers(arr);
    return 0;
}
```

---

## Output

```
Sorted array: 0 0 1 1 2 2 
```