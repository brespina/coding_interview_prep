// lengthOfLongestSubstringWithoutRepeatingCharacters/main.cpp
#include <iostream>
#include <string>

// sliding window prolly
class Solution {
	public:
		int lengthOfLongestSubstring(std::string s) {

		}

};
int main() {
	Solution solution;
	std::string test0 = "abcabcbb";
	std::string test1 = "bbbbb";
	std::string test2 = "pwwkew";

	std::cout << solution.lengthOfLongestSubstring(test0) << std::endl;
	std::cout << solution.lengthOfLongestSubstring(test1) << std::endl;
	std::cout << solution.lengthOfLongestSubstring(test2) << std::endl;

	return 0;
}

