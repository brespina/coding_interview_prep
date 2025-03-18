"""
    Plus One
    bwandii
"""
from typing import List

def plus_one(digits: List[int]) -> List[int]:
    digits[-1] += 1


def main():
    digits = [4,3,2,9]
    plus_one(digits)
    
    for digit in digits:
        print(digit)
    
if __name__ == "__main__":
    main()
    