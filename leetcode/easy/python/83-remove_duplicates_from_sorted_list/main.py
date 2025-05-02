"""
    83. Remove Duplicates From Sorted List
"""


from typing import Optional, List


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def delete_dupes(head: Optional[ListNode]) -> Optional[ListNode]:
    # it sorted. so dupes are guarenteed to follow
    # so only update current when next node value is different

    if not head:
        return head

    current = head
    while current and current.next:
        if current.val == current.next.val:
            current.next = current.next.next
        else:
            current = current.next

    return head


def main():



if __name__ == "__main__":
    main()

