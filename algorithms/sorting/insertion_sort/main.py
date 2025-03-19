"""
    Insertion sort

time complexity:
  Best        Average       Worst
Omega(n)  |  Theta(n^2)  |  O(n^2)

space complexity:
Worst
O(1)

stable: yes
"""

from typing import List, Tuple


def swap(a: int, b: int) -> Tuple[int, int]:
    a = a ^ b
    b = a ^ b
    a = a ^ b

    return a, b


def insertion_sort(nums: List) -> None:
    for i in range(1, len(nums)):
        position = i
        curr_val = nums[i]

        # shift until insert position
        while position > 0 and nums[position - 1] > curr_val:
            nums[position] = nums[position - 1]
            position -= 1

        nums[position] = curr_val


def main():
    list_1 = [3, 2, 1, 0]
    print("list 1 before: ", list_1)
    insertion_sort(list_1)
    print("list 1 after: ", list_1)

    list_2 = [42, 21, 0, 2, 82, -2, 8]
    print("list 2 before: ", list_2)
    insertion_sort(list_2)
    print("list 2 after: ", list_2)


if __name__ == "__main__":
    main()
