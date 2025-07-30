# BruteForce Method
- <i>A brute force algorithm is a simple, comprehensive search strategy that systematically explores every option until a problem's answer is discovered. It's a generic approach to problem-solving that's employed when the issue is small enough to make an in-depth investigation possible. </i>
- Try every possible solution to find the answer.
- For example, to find the maximum subarray sum, check the sum of all possible subarrays and pick the largest.

# Kadane's Algorithm
- <i>Kadane's Algorithm is a popular and efficient method to solve the Maximum Subarray Sum problem. It uses a dynamic programming approach to find the largest sum of a contiguous subarray in an array of integers </i>
- Efficient way to find the maximum subarray sum.
- Keep track of the current sum and the maximum sum as you go through the array.
- If the current sum becomes negative, reset it to zero.

# Moore's Voting Algorithm
- <i>The Boyer-Moore Voting Algorithm (commonly referred to as Moore's Voting Algorithm) is a highly efficient algorithm used to find the majority element in an array. A majority element is an element that appears more than [n/2] times in an array of size n.This algorithm operates in O(n) time complexity and uses O(1) space, making it optimal for this task.</i>
- Used to find the majority element in an array (element that appears more than half the time).
- Keep a candidate and a count. Increase count if the current element matches the candidate, otherwise decrease it.
- At the end, the candidate is the majority element if it exists.