# Binary Tree Data Structure: Applications in LeetCode Problems

## Overview

A **binary tree** is a hierarchical data structure where each node has at most two children, referred to as the **left child** and the **right child**. Binary trees are widely used in programming and are particularly useful for problems that involve **hierarchical data**, **searching**, **sorting**, or **traversal**.

This document provides a comprehensive guide to solving LeetCode problems using binary trees, categorized by problem type, with examples and explanations.

---

## **Key Operations on a Binary Tree**

1. **Insert**: Add a node to the binary tree.
2. **Delete**: Remove a node from the binary tree.
3. **Search**: Find a node with a specific value.
4. **Traversal**: Visit all nodes in a specific order (e.g., in-order, pre-order, post-order, level-order).
5. **Height/Depth**: Calculate the height or depth of the tree.
6. **Balanced Check**: Determine if the tree is balanced.

```
| **Data Structure** | **Operation**         | **Time Complexity** | **Space Complexity** |
|--------------------|-----------------------|---------------------|----------------------|
| **Binary Tree**     | Insert (BST)         | O(log n) (balanced) | O(log n) (recursion)  |
|                     | Delete (BST)         | O(log n) (balanced) | O(log n) (recursion)  |
|                     | Search (BST)         | O(log n) (balanced) | O(log n) (recursion)  |
|                     | Traversal (DFS/BFS)  | O(n)                | O(n) (worst case)     |
|                     | Height/Depth         | O(n)                | O(log n) (recursion)  |
|                     | Balanced Check       | O(n)                | O(log n) (recursion)  |
```

---

## **Categories of Binary Tree Problems**

### **1. Tree Traversal**

Problems that involve visiting all nodes in a specific order.

#### Example Problems

- **[94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)**  
  Traverse a binary tree in in-order (left, root, right).
- **[144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)**  
  Traverse a binary tree in pre-order (root, left, right).
- **[145. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)**  
  Traverse a binary tree in post-order (left, right, root).
- **[102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)**  
  Traverse a binary tree level by level.

#### Approach

- Use **recursion** or **iteration** (with a stack or queue) to perform the traversal.
- For level-order traversal, use a **queue** to process nodes level by level.

---

### **2. Path Sum Problems**

Problems that involve finding paths in a binary tree that satisfy certain conditions.

#### Example Problems

- **[112. Path Sum](https://leetcode.com/problems/path-sum/)**  
  Check if there is a root-to-leaf path that sums to a target value.
- **[113. Path Sum II](https://leetcode.com/problems/path-sum-ii/)**  
  Find all root-to-leaf paths that sum to a target value.
- **[437. Path Sum III](https://leetcode.com/problems/path-sum-iii/)**  
  Find the number of paths that sum to a target value (paths can start and end anywhere).

#### Approach

- Use **DFS (Depth-First Search)** to explore all paths.
- Track the current sum and path during traversal.

---

### **3. Tree Construction**

Problems that involve constructing a binary tree from given data.

#### Example Problems

- **[105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)**  
  Construct a binary tree from its preorder and inorder traversal.
- **[106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)**  
  Construct a binary tree from its inorder and postorder traversal.
- **[108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)**  
  Convert a sorted array to a height-balanced binary search tree.

#### Approach

- Use **recursion** to build the tree by dividing the input data into left and right subtrees.
- For height-balanced trees, ensure the middle element is the root.

---

### **4. Binary Search Tree (BST) Problems**

Problems that involve operations on binary search trees, where the left subtree contains smaller values and the right subtree contains larger values.

#### Example Problems

- **[98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)**  
  Check if a binary tree is a valid BST.
- **[701. Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/)**  
  Insert a value into a BST.
- **[450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)**  
  Delete a node from a BST.

#### Approach

- Use the **BST property** (left < root < right) to perform efficient searches, insertions, and deletions.
- For validation, ensure that in-order traversal produces a sorted list.

---

### **5. Tree Properties**

Problems that involve calculating properties of a binary tree, such as height, depth, or balance.

#### Example Problems

- **[104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)**  
  Find the maximum depth of a binary tree.
- **[110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)**  
  Check if a binary tree is balanced (the difference in heights of left and right subtrees is at most 1).
- **[543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)**  
  Find the diameter of a binary tree (the length of the longest path between any two nodes).

#### Approach

- Use **recursion** to calculate properties like height or depth.
- For diameter, track the longest path through each node.

---

### **6. Miscellaneous Problems**

Other problems where binary trees can be used as part of the solution.

#### Example Problems

- **[226. Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)**  
  Invert a binary tree (swap left and right children).
- **[617. Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/)**  
  Merge two binary trees by summing overlapping nodes.
- **[236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)**  
  Find the lowest common ancestor of two nodes in a binary tree.

#### Approach

- Use **recursion** or **DFS** to manipulate or traverse the tree.
- For LCA (Lowest Common Ancestor), track paths or use recursive backtracking.

---

## **Why Use a Binary Tree?**

1. **Hierarchical Data**:
   - Binary trees are ideal for representing hierarchical data, such as file systems or organizational structures.
2. **Efficient Searching**:
   - Binary search trees (BSTs) allow for efficient searching, insertion, and deletion in **O(log n)** time (if balanced).
3. **Traversal Flexibility**:
   - Binary trees support multiple traversal methods (in-order, pre-order, post-order, level-order), making them versatile for different problems.
4. **Dynamic Data**:
   - Binary trees can grow and shrink dynamically, making them suitable for datasets that change frequently.

---

## **Tips for Solving Binary Tree Problems**

1. **Understand Traversal Methods**:
   - Learn the differences between in-order, pre-order, post-order, and level-order traversals.
2. **Use Recursion**:
   - Recursion is a natural fit for tree problems due to their hierarchical nature.
3. **Track State**:
   - Use helper functions to track additional state, such as the current path or depth.
4. **Handle Edge Cases**:
   - Consider edge cases like empty trees, single-node trees, or skewed trees.
5. **Optimize for BSTs**:
   - Leverage the BST property (left < root < right) to optimize searches and other operations.

---

## **Conclusion**

Binary trees are a fundamental data structure that can be used to solve a wide range of problems on LeetCode. By understanding the key categories of binary tree problems and practicing the associated techniques, you can efficiently tackle many challenges in coding interviews and competitive programming.

---

This markdown file provides a comprehensive guide to solving binary tree-related problems on LeetCode, with examples, approaches, and tips. You can use it as a reference while preparing for coding interviews or competitive programming.
