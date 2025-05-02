"""
    100. Same Tree
"""

from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def is_same_tree(p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
    if p is None and q is None:
        # base case success
        return True
    if (p is None) ^ (q is None):
        # base case failure 
        return False

    if p.val == q.val:
        return is_same_tree(p.left, q.left) and is_same_tree(p.right, q.right)

    return False


def main():
    print("hi")


if __name__ == "__main__":
    main()

