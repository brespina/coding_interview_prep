"""
    Palindrome Number
    bwandii
"""

def is_palindrome(x: int) -> bool:
    if x < 0:
        return False

    reversed = 0
    temp = x
    
    while (temp != 0):
        digit = temp % 10
        reversed = reversed * 10 + digit
        temp //= 10
        
    return reversed == x

def main():
    test_cases = (121, 123, -121, 12345678987654321, 188881)
    
    for test in test_cases:
        result = is_palindrome(test)
        print(f"test: {test}, result: {result}")
    

if __name__ == "__main__":
    main() 
    