#include <iostream>
#include <string>

class Solution {
	public:
		int strStr(std::string haystack, std::string needle){
			return (haystack.find(needle));
		}
};

int main() {
	Solution solution;

	std::cout << "Test case 1: " << std::endl;
	std::cout << "string1: sadbutsad, string2: sad" << std::endl;
	std::cout << solution.strStr("sadbutsad", "sad") << std::endl;

	std::cout << "Test case 2:" << std::endl;
	std::cout << "string1: leetcode, string2: leeto" << std::endl;
	std::cout << solution.strStr("leetcode", "leeto") << std::endl;
	return 0;
}
