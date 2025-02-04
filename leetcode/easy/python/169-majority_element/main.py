"""
    169. majority element
"""

from typing import List

def majority_element(nums: List[int]) -> int:
    nums.sort()
    n = len(nums)
    return nums[n // 2]


    
def main():
    nums = [1,1,1,2,2,3,3,3,3,3,3,3,3]
    print("majority: ", majority_element(nums))


if __name__ == "__main__":
    main()

