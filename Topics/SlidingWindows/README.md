# Sliding Window

## Overview
The Sliding Window is a technique used to optimize problems that involve arrays, strings, or linked lists by reducing the time complexity from brute force O(n²) to O(n) in many cases. It maintains a contiguous window of elements that slides across the data structure to solve the problem efficiently.

## Key Concepts
- **Window**: A contiguous subarray or substring within the data structure
- **Sliding**: Moving the window by adding elements to the right and removing elements from the left
- **Optimization**: Reduces redundant calculations by reusing previous computations

## Types of Sliding Window

### 1. **Fixed Size Window**
The window size remains constant throughout the process.

**Characteristics:**
- Window size is predefined and doesn't change
- Move the window one element at a time
- Common for finding maximum/minimum in subarrays of fixed size

**Example:**
```
Find the maximum sum of any contiguous subarray of size k
```

### 2. **Variable Size Window**
The window size changes dynamically based on certain conditions.

**Characteristics:**
- Window expands and contracts based on problem requirements
- Right pointer expands to include new elements
- Left pointer shrinks to remove elements
- Uses two pointers approach

**Example:**
```
Find the longest substring without repeating characters
Find minimum window substring containing all characters
```

## Common Applications

1. **Maximum/Minimum in subarray** - Fixed size window
2. **Longest substring without repeating characters** - Variable size
3. **Maximum sum subarray of size k** - Fixed size
4. **Minimum window substring** - Variable size
5. **Permutation in string** - Variable size
6. **Fruit into baskets** - Variable size
7. **Longest repeating character replacement** - Variable size

## Time & Space Complexity

| Problem Type | Time Complexity | Space Complexity |
|---|---|---|
| Fixed Size Window | O(n) | O(1) or O(k) |
| Variable Size Window | O(n) | O(1) to O(n) |
| Brute Force | O(n²) or O(n³) | O(1) |

## When to Use Sliding Window

✓ Problem involves contiguous elements (subarray/substring)
✓ Need to optimize from O(n²) to O(n)
✓ Requires finding min/max in a range
✓ Need to count occurrences or validate conditions
✓ Linear data structure traversal
