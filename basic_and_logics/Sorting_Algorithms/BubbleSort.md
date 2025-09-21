# Bubble Sort in C++

This document explains the Bubble Sort algorithm and provides a sample implementation in C++.


## Video Explanation
[Watch on YouTube](https://www.youtube.com/watch?v=o4bAoo_gFBU)

```cpp
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str = "bac";
    std::vector<int> ascii_values;

    // Convert each character to its ASCII value
    for (char ch : str) {
        ascii_values.push_back(static_cast<int>(ch));
    }

    // --- Bubble Sort Algorithm ---
    for (size_t i = 0; i < ascii_values.size() - 1; ++i) {
        for (size_t j = 0; j < ascii_values.size() - i - 1; ++j) {
            if (ascii_values[j] > ascii_values[j + 1]) {
                std::swap(ascii_values[j], ascii_values[j + 1]);
            }
        }
    }

    // Print the sorted ASCII values and corresponding characters
    std::cout << "Sorted ASCII characters:\n";
    for (int val : ascii_values) {
        std::cout << static_cast<char>(val) << " ";
    }

    return 0;
}
```

- Optimized Bubble Sort version:

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Optimized Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                // Or,
                // temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void printVector(const vector<int>& arr) {
    for (int num : arr)
        cout << " " << num;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    cout << "Sorted array:\n";
    printVector(arr);
    return 0;
}
```

## Bubble Sort Explanation

This example sorts the characters of the string `"bac"` using Bubble Sort by their ASCII values.

**Steps:**
1. Convert each character to its ASCII value and store in a vector.
2. Use Bubble Sort to sort the ASCII values.
3. Print the sorted characters.

**Output:**
```
Sorted ASCII characters:
a b c 
```

## References

- [Bubble Sort - GeeksforGeeks](https://www.geeksforgeeks.org/bubble-sort/)
- [Bubble Sort - Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)