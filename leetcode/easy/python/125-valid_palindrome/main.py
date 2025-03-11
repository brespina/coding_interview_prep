"""
    125. valid palindrome
"""


def is_palindrome(s: str) -> bool:
    result = ""
    for char in s.lower():
        if char.isalnum():
            result += char

    if len(result) < 1:
        return False
    elif len(result) == 1:
        return True
    else:
        j = -1
        for i in range(len(result)//2):
            if result[i] != result[j]:
                return False
            j -= 1
        return True


def main():
    test1 = "heheasdaf"
    test2 = "Racecar"
    test3 = "asdf fdsa"

    print(is_palindrome(test1))
    print(is_palindrome(test2))
    print(is_palindrome(test3))


if __name__ == "__main__":
    main()
