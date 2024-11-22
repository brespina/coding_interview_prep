#include <iostream>
#include <string>

class Solution {
	public:
		int lengthLastWord(std::string s) {
			int length = 0;
			for(int i = s.size() - 1; i >= 0; i--) {
				if(s[i] == ' ' && length > 0) return length;
				else if(s[i] != ' ') length++;
			}
			return length; // if word is entire string
		}
};


int main() {
	Solution solution;

	std::string test0 = " hi hi hi ";
	std::string test1 = " hi hi hijfieowagfuefwa";
	std::string test2 = " hi hi hi b ";
	std::cout << solution.lengthLastWord(test0) << std::endl;
	std::cout << solution.lengthLastWord(test1) << std::endl;
	std::cout << solution.lengthLastWord(test2) << std::endl;

	return 0;
}
