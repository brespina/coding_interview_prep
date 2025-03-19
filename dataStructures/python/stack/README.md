# Stack Data Structure: Applications in LeetCode Problems

## Overview

A **stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle. This means that the last element added to the stack is the first one to be removed. Stacks are widely used in programming and are particularly useful for solving problems that involve **nested structures**, **reversing order**, **tracking history**, or **matching pairs**.

This document provides a comprehensive guide to solving LeetCode problems using stacks, categorized by problem type, with examples and explanations.

---

## **Key Operations on a Stack**

1. **Push**: Adds an element to the top of the stack.
2. **Pop**: Removes and returns the top element from the stack.
3. **Peek (or Top)**: Returns the top element without removing it.
4. **IsEmpty**: Checks if the stack is empty.
5. **Size**: Returns the number of elements in the stack.

```
| **Data Structure** | **Operation**   | **Time Complexity** | **Space Complexity** |
|--------------------|-----------------|---------------------|----------------------|
| **Stack**          | Push            | O(1)                | O(1)                 |
|                    | Pop             | O(1)                | O(1)                 |
|                    | Peek            | O(1)                | O(1)                 |
|                    | IsEmpty         | O(1)                | O(1)                 |
|                    | Size            | O(1)                | O(1)                 |
```

---

## **Categories of Stack Problems**

### **1. Parentheses/Bracket Matching**

Problems that involve checking the validity of nested or balanced parentheses, brackets, or other paired symbols.

#### Example Problems

- **[20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)**  
  Check if a string containing `()`, `{}`, and `[]` is valid.
- **[32. Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)**  
  Find the length of the longest valid (well-formed) parentheses substring.
- **[678. Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/)**  
  Check if a string with `(`, `)`, and `*` can form valid parentheses.

#### Approach

- Use a stack to keep track of opening symbols.
- For every closing symbol, check if it matches the top of the stack.
- Handle edge cases like empty stacks or unmatched symbols.

---

### **2. Expression Evaluation**

Problems that involve evaluating or parsing arithmetic expressions, such as infix, postfix, or prefix expressions.

#### Example Problems

- **[150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)**  
  Evaluate the value of an arithmetic expression in Reverse Polish Notation (postfix).
- **[224. Basic Calculator](https://leetcode.com/problems/basic-calculator/)**  
  Implement a basic calculator to evaluate a simple expression string with `+`, `-`, `(`, and `)`.
- **[227. Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/)**  
  Implement a basic calculator to evaluate a simple expression string with `+`, `-`, `*`, and `/`.

#### Approach

- Use a stack to store operands and intermediate results.
- For postfix expressions, push operands onto the stack and apply operators to the top elements.
- For infix expressions, use two stacks (one for operands and one for operators) or convert the expression to postfix first.

---

### **3. Next Greater/Smaller Element**

Problems that involve finding the next greater or smaller element in an array.

#### Example Problems

- **[496. Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)**  
  Find the next greater element for each element in a subset of an array.
- **[503. Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)**  
  Find the next greater element in a circular array.
- **[739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)**  
  Given an array of temperatures, find the number of days you have to wait for a warmer temperature.

#### Approach

- Use a **monotonic stack** to maintain elements in decreasing order.
- For each element, pop elements from the stack until you find a greater element or the stack is empty.
- Store the result and push the current element onto the stack.

---

### **4. Monotonic Stack Problems**

Problems that involve maintaining a stack with elements in a specific order (monotonic increasing or decreasing).

#### Example Problems

- **[84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)**  
  Find the largest rectangle area in a histogram.
- **[42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)**  
  Compute how much water can be trapped between bars of different heights.
- **[901. Online Stock Span](https://leetcode.com/problems/online-stock-span/)**  
  Design a data structure to compute the stock span for each day.

#### Approach

- Use a monotonic stack to track indices or values in a specific order.
- For each element, calculate the result based on the stack's top element and update the stack.

---

### **5. Reversing or Tracking History**

Problems that involve reversing elements or tracking a history of operations.

#### Example Problems

- **[394. Decode String](https://leetcode.com/problems/decode-string/)**  
  Decode a string with a pattern like `3[a]2[bc]` to `aaabcbc`.
- **[946. Validate Stack Sequences](https://leetcode.com/problems/validate-stack-sequences/)**  
  Given two sequences, check if they can be the push and pop operations of a stack.
- **[71. Simplify Path](https://leetcode.com/problems/simplify-path/)**  
  Simplify a Unix-style file path (e.g., `/a/./b/../../c/` to `/c`).

#### Approach

- Use a stack to simulate the process of reversing or tracking history.
- For decoding strings, use a stack to store counts and intermediate results.

---

### **6. Nested Structures**

Problems that involve nested structures, such as nested lists or nested integers.

#### Example Problems

- **[341. Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator/)**  
  Design an iterator to flatten a nested list of integers.
- **[385. Mini Parser](https://leetcode.com/problems/mini-parser/)**  
  Parse a string representation of a nested integer list.

#### Approach

- Use a stack to process nested elements level by level.
- Push elements onto the stack and pop them when processing is complete.

---

### **7. Matching or Pairing Problems**

Problems that involve matching or pairing elements in a sequence.

#### Example Problems

- **[1047. Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)**  
  Remove all adjacent duplicate characters in a string.
- **[1209. Remove All Adjacent Duplicates in String II](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/)**  
  Remove all adjacent duplicate characters in a string, but only if they appear exactly `k` times.

#### Approach

- Use a stack to track characters and their counts.
- Pop elements from the stack when a matching pair or duplicate is found.

---

### **8. Miscellaneous Problems**

Other problems where a stack can be used as part of the solution.

#### Example Problems

- **[155. Min Stack](https://leetcode.com/problems/min-stack/)**  
  Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
- **[232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)**  
  Implement a queue using two stacks.
- **[316. Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/)**  
  Remove duplicate letters from a string while maintaining the smallest lexicographical order.

#### Approach

- Use stacks to simulate other data structures (e.g., queues) or to optimize specific operations (e.g., finding the minimum element).

---

## **Why Use a Stack?**

- **LIFO Principle**: Stacks are ideal for problems where the last element processed is the first one to be removed.
- **Temporary Storage**: Stacks can be used to temporarily store elements while processing them (e.g., reversing or evaluating expressions).
- **Efficiency**: Stack operations (push, pop, peek) are typically **O(1)**, making them efficient for many problems.

---

## **Tips for Solving Stack Problems**

1. **Identify the LIFO Requirement**: Look for problems where the order of processing matters (e.g., reversing, nested structures).
2. **Use a Stack for Tracking**: Use a stack to keep track of elements or states as you process them.
3. **Pairing Problems**: For problems involving matching pairs (e.g., parentheses), use a stack to ensure proper nesting.
4. **Monotonic Stacks**: For problems involving finding the next greater/smaller element, use a monotonic stack to maintain order.

---

## **Conclusion**

Stacks are a powerful and versatile data structure that can be used to solve a wide range of problems on LeetCode. By understanding the key categories of stack problems and practicing the associated techniques, you can efficiently tackle many challenges in coding interviews and competitive programming.

---

This markdown file provides a comprehensive guide to solving stack-related problems on LeetCode, with examples, approaches, and tips. You can use it as a reference while preparing for coding interviews or competitive programming.
