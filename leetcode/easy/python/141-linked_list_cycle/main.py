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
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if fast == slow:
            return True
    return False


def main():
    # test case 1: No cycle
    list1 = ListNode(3)
    list1.next = ListNode(2)
    list1.next.next = ListNode(0)
    list1.next.next.next = ListNode(-4)
    print("Test case 1 (No cycle):", has_cycle(list1))  # Expected output: False

    # test case 2: cycle present
    list2 = ListNode(3)
    list2.next = ListNode(2)
    list2.next.next = ListNode(0)
    list2.next.next.next = ListNode(-4)
    list2.next.next.next.next = list2.next  # create a cycle
    print("Test case 2 (Cycle present):", has_cycle(list2))  # Expected output: True

    # test case 3: single node, no cycle
    list3 = ListNode(1)
    print("Test case 3 (Single node, no cycle):", has_cycle(list3))  # Expected output: False

    # test case 4: single node with cycle (points to itself)
    list4 = ListNode(1)
    list4.next = list4  # create a cycle
    print("Test case 4 (Single node with cycle):", has_cycle(list4))  # Expected output: True

    # Test case 5: Empty list
    list5 = None
    print("Test case 5 (Empty list):", has_cycle(list5))  # Expected output: False

if __name__ == "__main__":
    main()