# Dutch National Flag Algorithm

The Dutch National Flag Algorithm is a sorting algorithm that sorts an array of three distinct elements (often represented as 0s, 1s, and 2s) in linear time with single pass. It is named after the Dutch national flag, which has three colors.

```
Time Complexity: O(n)
Space Complexity: O(1)
```

# Example

array = [2, 0, 1, 2, 1, 0]

<b>we need to sort the array such that all 0s come first, followed by all 1s, and then all 2s. The sorted array is [0, 0, 1, 1, 2, 2].</b>

<b>imp:</b> For this, we initialize three pointers: low, mid, and high. We iterate through the array, and based on the value of the current element (pointed by mid), we swap it with the appropriate position (low or high) and adjust the pointers accordingly.

this forms the table like this: 0 to low - 1, low to mid - 1, m to h (unsorted) , h + 1 to n - 1. We keep on iterating until mid exceeds high. This ensures that all elements are sorted in a single pass through the array.

<b>Illustration table:</b>
[0 to low -1, low to mid - 1, mid to high (unsorted), high + 1 to n - 1]

[See the code](./code.cpp) for implementation.