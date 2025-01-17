"""
    Roman to Integer
    bwandii
"""

def roman_to_int(s: str) -> int:
    translation = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000
    }
    num = 0
    
    for i in range(len(s) -1):
        if translation[s[i]] < translation[s[i + 1]]:
            num -= translation[s[i]]
        else:
            num += translation[s[i]]

    return num + translation[s[-1]]

def main():
    test_cases = (
        "III",
        "VIII",
        "CD",
        "DC"
        )

    for test in test_cases:
        result = roman_to_int(test)
        print(f"test: {test}, result: {result}")


if __name__ == "__main__":
    main()
    