"""
    141. linked list cycle
"""

from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def has_cycle(head: Optional[ListNode]) -> bool:
    slow = head
    fast = head
    while fast.next is not None:
        slow = slow.next
        fast = fast.next.next
        if fast == slow:
            return True
    return False


def main():


if __name__ == "__main__":
    main()
