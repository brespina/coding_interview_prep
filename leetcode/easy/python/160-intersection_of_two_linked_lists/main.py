"""
    160. Intersection of two linked lists
"""
from typing import Optional

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def get_intersection_node(head_a: ListNode, head_b: ListNode) -> Optional[ListNode]:
    stackA = ['A']
    stackB = ['A']

    while head_a or head_b:
        if head_a:
            stackA.append(head_a)
            head_a = head_a.next
        if head_b:
            stackB.append(head_b)
            head_b = head_b.next
        
        prev = None
        while stackA and stackB:
            nodeA = stackA.pop(-1)
            nodeB = stackB.pop(-1)

            if nodeA != nodeB:
                return prev
            
            prev = nodeA
    



def main():
    print("writing test case too complicated for me rn.")


if __name__ == "__main__":
    main()
