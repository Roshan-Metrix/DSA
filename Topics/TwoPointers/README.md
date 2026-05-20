# Two Pointer Technique

Two Pointer is a common technique in DSA for solving problems on arrays or linked lists. It uses two indices (or pointers) that move through the data structure in a coordinated way, often from both ends or at different speeds.

### Key ideas:
- Use one pointer at the start and one at the end of a ***sorted array***, then move pointers inward based on a condition.
- Use slow and fast pointers for cycle detection, middle element finding, or linked list problems.
- Find pairs, subarrays, or check conditions in linear time.

## Types of Two Pointer Techniques
1. **Opposite Direction Pointers**: One pointer starts at the beginning and the other at the end of the array. They move towards each other based on a condition (e.g., sum comparison).
2. **Same Direction Pointers** ***(Sliding Window Style)***: Both pointers start at the same position and move in the same direction, often used for finding subarrays or checking conditions.
3. **Fast and Slow Pointers**: One pointer moves faster than the other, commonly used in linked list problems to detect cycles or find the middle element.

### Common use cases:
- Pair sum in a sorted array.
- Count pairs with a given sum.
- Check if an array or linked list is a palindrome.
- Find subarrays with a target sum.
- Detect cycles in a linked list.

### Advantages:
- Often O(n) time.
- Usually O(1) extra space.
- Useful when the input is sorted or when the problem can be reduced to a linear scan with two moving pointers.
