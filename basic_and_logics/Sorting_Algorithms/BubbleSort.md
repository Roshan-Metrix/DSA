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