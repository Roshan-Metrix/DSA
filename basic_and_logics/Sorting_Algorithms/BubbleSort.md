 -  #include <iostream>
    #include <string>
    #include <vector>

    int main() {
    std::string str = "bac";
    std::vector<int> ascii_values;

    for (int i = 0; i < str.length(); ++i) {
        ascii_values.push_back(static_cast<int>(str[i]));
    }

    // --- Bubble Sort Algorithm ---
    // Outer loop for the number of passes
    for (int i = 0; i < ascii_values.size() - 1; ++i) {
        // Inner loop for comparisons and swaps
        for (int j = 0; j < ascii_values.size() - i - 1; ++j) {
            // Compare adjacent elements and swap them if they are in the wrong order
            if (ascii_values[j] > ascii_values[j + 1]) {
                // Swap the values using a temporary variable
                int temp = ascii_values[j];
                ascii_values[j] = ascii_values[j + 1];
                ascii_values[j + 1] = temp;
            }
        }
    }

    // --- Print the sorted ASCII values and the corresponding characters ---
    std::cout << "Sorted ASCII characters:\n";
    for (int i = 0; i < ascii_values.size(); ++i) {
        
    // Convert the ASCII value back to a character and print it
        std::cout << static_cast<char>(ascii_values[i]) << " ";
    }

    return 0;
}