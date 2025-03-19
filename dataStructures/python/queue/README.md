# Queue Data Structure: Applications in LeetCode Problems

## Overview

A **queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle. This means that the first element added to the queue is the first one to be removed. Queues are widely used in programming and are particularly useful for solving problems that involve **order preservation**, **level-order traversal**, **scheduling**, or **simulation**.

This document provides a comprehensive guide to solving LeetCode problems using queues, categorized by problem type, with examples and explanations.

---

## **Key Operations on a Queue**

1. **Enqueue**: Adds an element to the back of the queue.
2. **Dequeue**: Removes and returns the element from the front of the queue.
3. **Peek (or Front)**: Returns the element at the front of the queue without removing it.
4. **IsEmpty**: Checks if the queue is empty.
5. **Size**: Returns the number of elements in the queue.

```
| **Data Structure** | **Operation**       | **Time Complexity** | **Space Complexity** |
|--------------------|---------------------|---------------------|----------------------|
| **Queue**          | Enqueue             | O(1)                | O(1)                 |
|                    | Dequeue             | O(1)                | O(1)                 |
|                    | Peek                | O(1)                | O(1)                 |
|                    | IsEmpty             | O(1)                | O(1)                 |
|                    | Size                | O(1)                | O(1)                 |
```

---

## **Categories of Queue Problems**

### **1. Level-Order Traversal (BFS)**

Problems that involve traversing a tree or graph level by level, often using Breadth-First Search (BFS).

#### Example Problems

- **[102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)**  
  Traverse a binary tree level by level and return the nodes in a list of lists.
- **[107. Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)**  
  Traverse a binary tree level by level and return the nodes in reverse order.
- **[637. Average of Levels in Binary Tree](https://leetcode.com/problems/average-of-levels-in-binary-tree/)**  
  Calculate the average value of nodes at each level of a binary tree.

#### Approach

- Use a queue to store nodes at the current level.
- Process each level by dequeuing nodes and enqueuing their children.
- Repeat until the queue is empty.

---

### **2. Sliding Window Problems**

Problems that involve maintaining a window of elements in an array or string and performing operations on the window.

#### Example Problems

- **[239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)**  
  Find the maximum element in each sliding window of size `k`.
- **[567. Permutation in String](https://leetcode.com/problems/permutation-in-string/)**  
  Check if a string contains a permutation of another string.
- **[904. Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/)**  
  Find the maximum number of fruits you can collect with two baskets.

#### Approach

- Use a queue (or deque) to maintain the window of elements.
- Update the queue as the window slides and perform the required operations.

---

### **3. Simulation Problems**

Problems that involve simulating real-world processes or systems, often requiring order preservation.

#### Example Problems

- **[346. Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/)**  
  Calculate the moving average of a stream of numbers.
- **[933. Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)**  
  Count the number of recent requests within a time frame.
- **[621. Task Scheduler](https://leetcode.com/problems/task-scheduler/)**  
  Schedule tasks with a cooldown period to minimize total time.

#### Approach

- Use a queue to simulate the process or system.
- Enqueue and dequeue elements based on the problem's requirements.

---

### **4. Circular Queue Problems**

Problems that involve implementing or using a circular queue, where the queue wraps around to the beginning when it reaches the end.

#### Example Problems

- **[622. Design Circular Queue](https://leetcode.com/problems/design-circular-queue/)**  
  Design a circular queue with a fixed size.
- **[641. Design Circular Deque](https://leetcode.com/problems/design-circular-deque/)**  
  Design a circular double-ended queue.

#### Approach

- Use an array or linked list to implement the circular queue.
- Handle edge cases like full and empty queues.

---

### **5. Priority Queue (Heap) Problems**

Problems that involve processing elements based on priority, often using a priority queue (heap).

#### Example Problems

- **[23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)**  
  Merge `k` sorted linked lists into one sorted list.
- **[215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)**  
  Find the kth largest element in an array.
- **[253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)**  
  Find the minimum number of conference rooms required for meetings.

#### Approach

- Use a priority queue (min-heap or max-heap) to process elements based on priority.
- Enqueue and dequeue elements while maintaining the heap property.

---

### **6. BFS in Graphs**

Problems that involve traversing a graph using Breadth-First Search (BFS), often to find the shortest path or connected components.

#### Example Problems

- **[200. Number of Islands](https://leetcode.com/problems/number-of-islands/)**  
  Count the number of islands in a 2D grid.
- **[994. Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)**  
  Determine the minimum time required for all oranges to rot.
- **[542. 01 Matrix](https://leetcode.com/problems/01-matrix/)**  
  Find the distance of the nearest 0 for each cell in a binary matrix.

#### Approach

- Use a queue to perform BFS traversal.
- Enqueue starting nodes and process their neighbors level by level.

---

### **7. Miscellaneous Problems**

Other problems where a queue can be used as part of the solution.

#### Example Problems

- **[225. Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)**  
  Implement a stack using two queues.
- **[232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)**  
  Implement a queue using two stacks.
- **[346. Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/)**  
  Calculate the moving average of a stream of numbers.

#### Approach

- Use queues to simulate other data structures or processes.
- Enqueue and dequeue elements based on the problem's requirements.

---

## **Why Use a Queue?**

- **FIFO Principle**: Queues are ideal for problems where the order of processing matters (e.g., level-order traversal, scheduling).
- **Order Preservation**: Queues maintain the order of elements, making them suitable for simulations and BFS.
- **Efficiency**: Queue operations (enqueue, dequeue, peek) are typically **O(1)**, making them efficient for many problems.

---

## **Tips for Solving Queue Problems**

1. **Identify the FIFO Requirement**: Look for problems where the order of processing matters (e.g., level-order traversal, simulations).
2. **Use a Queue for BFS**: Use a queue to implement Breadth-First Search (BFS) for graphs or trees.
3. **Sliding Window**: Use a queue (or deque) to maintain a sliding window of elements.
4. **Priority Queues**: For problems involving priority, use a priority queue (heap) to process elements.

---

## **Conclusion**

Queues are a powerful and versatile data structure that can be used to solve a wide range of problems on LeetCode. By understanding the key categories of queue problems and practicing the associated techniques, you can efficiently tackle many challenges in coding interviews and competitive programming.

---

This markdown file provides a comprehensive guide to solving queue-related problems on LeetCode, with examples, approaches, and tips. You can use it as a reference while preparing for coding interviews or competitive programming.
