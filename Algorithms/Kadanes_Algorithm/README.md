# Kadane's Algorithm

It is an algorithm to find the maximum sum of a contiguous subarray in an array of integers. It is an efficient way to solve the maximum subarray problem.

```
Time Complexity: O(n)
Space Complexity: O(1)
```

## Example

array = [-2,1,-3,4,-1,2,1,-5,4]

<b>we need to find the maximum sum of a contiguous subarray. The maximum sum is 6, which is obtained from the subarray [4,-1,2,1].</b>

<b>imp:</b> For this, we initialize two variables, i.e currentSum and maxSum. We iterate through the array, adding each element to currentSum. If currentSum becomes negative, we reset it to 0. We also update maxSum whenever currentSum exceeds it.

[See the code](./code.cpp) for implementation.


