"""
    Two Sum
    bwandii
"""

from typing import List


def twoSum(nums: List[int], target: int) -> List[int]:
    hash_map = {}

    for i in range(len(nums)):
        complement = target - nums[i]

        if complement in hash_map:
            return [hash_map[complement], i]

        hash_map[nums[i]] = i

    return []


def main():
    test_cases = [
        ([2, 7, 11, 15], 9),          # Example 1
        ([3, 2, 4], 6),               # Example 2
        ([3, 3], 6),                  # Example 3
        ([-3, 4, 3, 90], 0),          # Edge Case 1
        ([1, 2, 3, 4, 5, 6], 10),     # General Case
        ([10, -10, 20, -20], 0),      # Negative and positive values
    ]

    for nums, target in test_cases:
        result = twoSum(nums, target)
        print(f"nums: {nums}, target: {target}, result: {result}")


if __name__ == "__main__":
    main()
