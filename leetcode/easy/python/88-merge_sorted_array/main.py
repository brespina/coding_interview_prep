"""
    88. merge sorted array
    current solution with sort is O((m + n)log(n))
    better solution with two pointers.
"""
from typing import List

def merge(nums1: List[int], m: int, nums2: List[int], n: int) -> None:
    """
    do not return anything: modify nums1 in place instead
    """
    for i in range(n):
        nums1[m + i] = nums2[i]
    nums1.sort()



def main():
    test1 = [1,2,3,0,0,0]
    print("before: ", test1)
    test2 = [2,5,6]
    merge(test1, 3, test2, 3)
    print("after: ", test1)


    
if __name__ == "__main__":
    main()

