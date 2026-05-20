# Prefix Sum

Prefix sum is a technique for computing cumulative sums of an array so you can answer range sum queries efficiently.

## Definition
Given an array `arr` of length `n`, the prefix sum array `pref` is defined as:

- `pref[0] = arr[0]`
- `pref[i] = pref[i-1] + arr[i]` for `i > 0`

## Uses
- Compute sum of any subarray `arr[l..r]` in constant time.
- Speed up repeated range queries.
- Useful in problems with intervals, differences, and cumulative counts.

## Range sum formula
For 0-based indexing:

- `sum(arr[l..r]) = pref[r] - (pref[l-1] if l > 0 else 0)`

## Example
For `arr = [2, 5, 1, 4]`:

- `pref = [2, 7, 8, 12]`
- sum of `arr[1..3] = pref[3] - pref[0] = 12 - 2 = 10`

## Benefits
- Builds in O(n)
- Answers queries in O(1)
- Avoids repeated summation over ranges

## 2D Prefix Sum
Formula:
- `prefix[i][j] = a[i][j] + prefix[i−1][j] + prefix[i][j−1] − prefix[i−1][j−1]`
Eg. for a 2D array:
```
    1 2 3
    4 5 6
    7 8 9
```
The prefix sum array would be:
```
    1 3 6
    5 12 21
    12 27 45
```

**Range sum in 2D**:
- `sum = prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1]`
Eg. sum of submatrix from (1,1) to (2,2):
- `sum = prefix[2][2] - prefix[0][2] - prefix[2][0] + prefix[0][0] = 12 - 6 - 5 + 1 = 2`

## Conclusion
Prefix sums are a powerful tool for optimizing range queries and can be extended to multiple dimensions. They allow for efficient computation of sums and are widely used in competitive programming and algorithm design.
