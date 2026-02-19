#  Time Complexity Guide (C++ Focused)

This guide teaches you how to determine the **time complexity of code just by looking at it**.

---

#  How to Think About Time Complexity

Time complexity measures:

> How the number of operations grows as input size (n) grows.

We ignore:
- Variable declarations
- Simple arithmetic operations
- Constants
- Machine speed

We focus on:
- Loops
- Nested loops
- Recursion
- Function calls inside loops

---

# 🔹 Rule 1: One Loop → O(n)

```cpp
for (int i = 0; i < n; i++) {
    // runs n times
}
```

 Time Complexity: **O(n)**

---

# 🔹 Rule 2: Nested Loops → Multiply

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // runs n * n times
    }
}
```

Total = n × n = n²  
 Time Complexity: **O(n²)**

---

# 🔹 Rule 3: Triangular Loop Pattern

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        // runs 1 + 2 + 3 + ... + n times
    }
}
```

Sum = n(n+1)/2  
Drop constants → **O(n²)**

---

# 🔹 Rule 4: Halving Each Time → O(log n)

```cpp
while (n > 1) {
    n = n / 2;
}
```

Each step divides by 2.

Example:
16 → 8 → 4 → 2 → 1

Number of steps = log₂(n)

 Time Complexity: **O(log n)**

---

# 🔹 Rule 5: Separate Loops → Add

```cpp
for (int i = 0; i < n; i++) {}
for (int i = 0; i < n; i++) {}
```

Total = n + n = 2n  
Drop constant → **O(n)**

---

# 🔹 Rule 6: Loop with Log Inside → Multiply

```cpp
for (int i = 0; i < n; i++) {
    while (x > 1) {
        x = x / 2;
    }
}
```

Outer = n  
Inner = log n  

Total = n log n  

 Time Complexity: **O(n log n)**

---

# 🔹 Rule 7: Two Pointers / Sliding Window

```cpp
while (fast != nullptr) {
    fast = fast->next;
    slow = slow->next;
}
```

Even with two pointers:

Each element is visited once.

 Time Complexity: **O(n)**

Important:  
Two pointers does NOT mean O(n²).

Always ask:
> How many total movements happen?

---

# 🔹 Rule 8: Recursion Patterns

### Linear Recursion
```cpp
f(n - 1);
```
 O(n)

---

### Divide by Half
```cpp
f(n / 2);
```
 O(log n)

---

### Divide and Branch
```cpp
f(n / 2) + f(n / 2);
```
 O(n)

---

### Fibonacci Pattern
```cpp
f(n - 1) + f(n - 2);
```
 O(2ⁿ) (Exponential)

---

# 🔥 Most Common Complexities

| Complexity | Meaning |
|------------|----------|
| O(1) | Constant time |
| O(n) | Linear |
| O(n²) | Quadratic |
| O(log n) | Logarithmic |
| O(n log n) | Merge sort type growth |
| O(2ⁿ) | Exponential |

---

#  How To Analyze Any Code (Checklist)

1. Look for loops.
2. Are loops nested?
3. Does something shrink or divide?
4. Multiply nested loops.
5. Add separate loops.
6. Drop constants and lower powers.

Example:

O(3n² + 5n + 2)  
→ Drop constants  
→ **O(n²)**

---

#  Practice Example

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
        cout << i;
    }
}
```

Inner loop runs 5 times (constant).

Total = 5n  
Drop constant → **O(n)**

---

#  Final Tip

Time complexity is about **growth**, not exact counts.

As n becomes very large:
- Constants don’t matter
- Smaller powers don’t matter
- Highest growth dominates

---

