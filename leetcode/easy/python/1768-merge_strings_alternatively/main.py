"""
    Merge Strings Alternatively
    bwandii
"""


def merge_alternatively(word1: str, word2: str) -> str:
    result = ""

    if len(word1) > len(word2):
        short_word = word2
        long_word = word1
    else:
        short_word = word1
        long_word = word2

    for i in range(len(short_word)):
        result += word1[i]
        result += word2[i]

    result += long_word[len(short_word):]

    return result


def main():
    test1 = "abc"
    test2 = "xyz"
    
    test3 = "lets go gambling"
    test4 = "the fitnessgram pacer test"
    print(merge_alternatively(test1, test2))
    print(merge_alternatively(test3, test4))


if __name__ == "__main__":
    main()

