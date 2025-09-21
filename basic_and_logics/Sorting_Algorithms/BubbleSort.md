```cpp
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str = "bac";
    std::vector<int> ascii_values;

    // Convert each character to its ASCII value
    for (int i = 0; i < str.length(); ++i) {
        ascii_values.push_back(static_cast<int>(str[i]));
    }

    // --- Bubble Sort Algorithm ---
    for (int i = 0; i < ascii_values.size() - 1; ++i) {
        for (int j = 0; j < ascii_values.size() - i - 1; ++j) {
            if (ascii_values[j] > ascii_values[j + 1]) {
                int temp = ascii_values[j];
                ascii_values[j] = ascii_values[j + 1];
                ascii_values[j + 1] = temp;
            }
        }
    }

    // Print the sorted ASCII values and corresponding characters
    std::cout << "Sorted ASCII characters:\n";
    for (int i = 0; i < ascii_values.size(); ++i) {
        std::cout << static_cast<char>(ascii_values[i]) << " ";
    }

    return 0;
}
```
- Also 
show an optimized version of Bubble Sort:

```cpp
#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort 
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

// Function to print a vector
void printVector(const vector<int>& arr) {
    for (int num : arr)
        cout << " " << num;
}

int main() {
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    bubbleSort(arr);
    cout << "Sorted array: \n";
    printVector(arr);
    return 0;
}
```

## Bubble Sort Explanation

This example sorts the characters of the string `"bac"` using the Bubble Sort algorithm by their ASCII values.

**Steps:**
1. Convert each character to its ASCII value and store in a vector.
2. Use Bubble Sort to sort the ASCII values.
3. Print the sorted characters.

**Output:**
```
Sorted ASCII characters:
a b c 
```