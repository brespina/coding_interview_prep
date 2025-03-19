"""
Bubble sort implementation

time complexity:
     Best               Average         Worst
Omega(n log(n))  |  Theta(n log(n))  |  O(n^2)

space complexity:
Worst
O(log(n))
"""

from typing import List, Tuple


def swap(a: int, b: int) -> Tuple[int, int]:
    a = a ^ b
    b = a ^ b
    a = a ^ b

    return a, b


def bubble_sort(nums: List[int]) -> None:
    swapped = True

    while swapped:
        swapped = False

        for n in range(len(nums) - 1):
            if nums[n] > nums[n + 1]:
                nums[n], nums[n + 1] = swap(nums[n], nums[n + 1])
                swapped = True


def main():
    list_1 = [3, 2, 1]
    print("l1 before: ", list_1)
    bubble_sort(list_1)
    print("l1 after: ", list_1)

    list_2 = [1, 1, 3, 1, 4231, 432, 1239393, 0, 1, 8]
    print("l2 before: ", list_2)
    bubble_sort(list_2)
    print("l2 after: ", list_2)


if __name__ == "__main__":
    main()
