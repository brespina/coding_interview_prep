# Heap Data Structure: Applications in LeetCode Problems

## Overview

A **heap** is a specialized tree-based data structure that satisfies the **heap property**. In a **min-heap**, the value of each node is greater than or equal to the value of its parent, with the smallest value at the root. In a **max-heap**, the value of each node is less than or equal to the value of its parent, with the largest value at the root.

Heaps are commonly used to implement **priority queues** and are efficient for problems that involve finding the **minimum or maximum element** in a dataset, **sorting**, or **scheduling**.

This document provides a comprehensive guide to solving LeetCode problems using heaps, categorized by problem type, with examples and explanations.

---

## **Key Operations on a Heap**

1. **Insert**: Add an element to the heap.
2. **Extract Min/Max**: Remove and return the smallest (min-heap) or largest (max-heap) element.
3. **Peek**: Return the smallest or largest element without removing it.
4. **Heapify**: Convert a list of elements into a heap.
5. **Size**: Return the number of elements in the heap.

```
|              |    **Operation**     | **Time Complexity** | **Space Complexity** |
|--------------|----------------------|--------------------|----------------------|
| **Heap**     | Insert               | O(log n)            | O(1)                 |
|              | Extract Min/Max      | O(log n)            | O(1)                 |
|              | Peek (Min/Max)       | O(1)                | O(1)                 |
|              | Heapify              | O(n)                | O(1)                 |
|              | Size                 | O(1)                | O(1)                 |
```

## **Categories of Heap Problems**

### **1. Finding the Kth Largest/Smallest Element**

Problems that involve finding the Kth largest or smallest element in a dataset.

#### Example Problems

- **[215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)**  
  Find the Kth largest element in an unsorted array.
- **[703. Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/)**  
  Design a class to find the Kth largest element in a stream of numbers.

#### Approach

- Use a **min-heap** to keep track of the K largest elements.
- For each new element, add it to the heap and remove the smallest element if the heap size exceeds K.

---

### **2. Merge K Sorted Lists**

Problems that involve merging multiple sorted lists into a single sorted list.

#### Example Problems

- **[23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)**  
  Merge K sorted linked lists into one sorted linked list.

#### Approach

- Use a **min-heap** to store the smallest element from each list.
- Repeatedly extract the smallest element from the heap and add it to the result.

---

### **3. Top K Frequent Elements**

Problems that involve finding the most frequent elements in a dataset.

#### Example Problems

- **[347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)**  
  Find the K most frequent elements in an array.
- **[692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/)**  
  Find the K most frequent words in a list.

#### Approach

- Use a **max-heap** (or min-heap with size K) to store elements based on their frequency.
- Extract the top K elements from the heap.

---

### **4. Scheduling Problems**

Problems that involve scheduling tasks or events based on priority.

#### Example Problems

- **[253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)**  
  Find the minimum number of conference rooms required for meetings.
- **[630. Course Schedule III](https://leetcode.com/problems/course-schedule-iii/)**  
  Schedule courses to maximize the number of courses taken.

#### Approach

- Use a **min-heap** to keep track of end times or deadlines.
- Adjust the heap based on the scheduling constraints.

---

### **5. Median Finding**

Problems that involve finding the median of a stream of numbers.

#### Example Problems

- **[295. Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)**  
  Design a data structure to find the median of a stream of numbers.

#### Approach

- Use two heaps: a **max-heap** for the smaller half and a **min-heap** for the larger half.
- Balance the heaps to ensure the median is easily accessible.

---

### **6. Miscellaneous Problems**

Other problems where heaps can be used as part of the solution.

#### Example Problems

- **[378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)**  
  Find the Kth smallest element in a sorted matrix.
- **[767. Reorganize String](https://leetcode.com/problems/reorganize-string/)**  
  Reorganize a string so that no two adjacent characters are the same.

#### Approach

- Use a **max-heap** to prioritize elements based on frequency or value.
- Adjust the heap based on the problem's constraints.

---

## **Why Use a Heap?**

1. **Efficient Min/Max Access**:
   - Heaps allow you to access the smallest or largest element in **O(1)** time.
2. **Dynamic Data**:
   - Heaps are efficient for datasets that change frequently, as insertion and extraction take **O(log n)** time.
3. **Priority Queues**:
   - Heaps are the underlying data structure for priority queues, which are useful for scheduling and task management.
4. **Space Efficiency**:
   - Heaps use minimal space compared to other data structures like balanced binary search trees.

---

## **Tips for Solving Heap Problems**

1. **Choose the Right Heap**:
   - Use a **min-heap** for problems involving the smallest elements and a **max-heap** for problems involving the largest elements.
2. **Heapify Efficiently**:
   - Use Python's `heapq.heapify` to convert a list into a heap in **O(n)** time.
3. **Track K Elements**:
   - For problems involving the Kth largest or smallest element, maintain a heap of size K.
4. **Two Heaps for Medians**:
   - Use a **max-heap** and a **min-heap** to efficiently find the median of a data stream.
5. **Simulate Processes**:
   - Use heaps to simulate processes like scheduling or task prioritization.

---

## **Conclusion**

Heaps are a powerful and versatile data structure that can be used to solve a wide range of problems on LeetCode. By understanding the key categories of heap problems and practicing the associated techniques, you can efficiently tackle many challenges in coding interviews and competitive programming.

---

This markdown file provides a comprehensive guide to solving heap-related problems on LeetCode, with examples, approaches, and tips. You can use it as a reference while preparing for coding interviews or competitive programming.
