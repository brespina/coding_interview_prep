"""
    Quick sort

time complexity:

   Best               Average           Worst
Omega(n log(n))  |  Theta(n log(n))  |  O(n^2)

spaace complexity:
Worst
O(log(n))
"""

from typing import List, Tuple


def swap(a: int, b: int) -> Tuple[int, int]:
    a = a ^ b
    b = a ^ b
    a = a ^ b

    return a, b


def partition(arr: List[int], low: int, high: int) -> int:
    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = swap(arr[i], arr[j])

    arr[i + 1], arr[high] = swap(arr[i + 1], arr[high])
    return i + 1


def quick_sort(arr: List[int], low=0, high=None) -> None:
    if high is None:
        high = len(arr) - 1

    if low < high:
        pivot = partition(arr, low, high)
        quick_sort(arr, low, pivot - 1)
        quick_sort(arr, pivot + 1, high)


def main():
    arr = [64, 11, 24, 89, 0, 1]
    quick_sort(arr)
    print("arr sorted: ", arr)


if __name__ == "__main__":
    main()
