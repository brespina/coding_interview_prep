"""
    Reverse Vowels in a String
"""

VOWELS = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']

def reverse_vowels(s: str) -> str:
    vowel_pos = []
    for char in s:
        if char in VOWELS:
            vowel_pos.append(char)

    reversed_vowels = vowel_pos[::-1]
    print(f"original vowels: {vowel_pos}")
    print(f"reversed vowels: {reversed_vowels}")

    
    return reversed

def main():
    test_0 = "hello world"
    test_1 = "boochi noochi"
    test_2 = "nawnaw delay"

    print(f"test 0: {test_0}")
    reverse_vowels(test_0)
    print(f"test 1: {test_1}")
    reverse_vowels(test_1)
    print(f"test 2: {test_2}")
    reverse_vowels(test_2)



if __name__ == "__main__":
    main()

