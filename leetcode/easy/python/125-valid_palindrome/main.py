"""
    125. valid palindrome
"""


def is_palindrome(s: str) -> bool:
    result = ""
    for char in s.lower():
        if char.isalnum():
            result += char
    return result[::-1] == result


def main():
    test1 = "heheasdaf"
    test2 = "Racecar"
    test3 = "asdf fdsa"

    print(is_palindrome(test1))
    print(is_palindrome(test2))
    print(is_palindrome(test3))


if __name__ == "__main__":
    main()
