"""
    Longest Common Prefix
    bwandii
"""
from typing import List

def longest_common_prefix(strs: List[str]) -> str:
    strs = sorted(strs)
    result = ""
    for i, char in enumerate(strs[0]):
        if strs[0][i] != strs[-1][i]:
            return result
        result += char
    
    return result

def main():
    test_cases = (
        ["flower", "flow", "flight"],
        ["dog", "racecar", "car"]
        )

    for test in test_cases:
        result = longest_common_prefix(test)
        print(f"test: {test}, result: {result}")


if __name__ == "__main__":
    main()