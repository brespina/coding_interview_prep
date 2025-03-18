"""
    234. paliondrome linked list
"""

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next 

def is_palindrome(head: Optional[ListNode]) -> bool:

    
def main():
    listA = ListNode(1)
    listA.next = ListNode(2)
    listA.next.next = ListNode(2)
    listA.next.next.next = ListNode(1)
    
    
if __name__ == "__main__":
    main()