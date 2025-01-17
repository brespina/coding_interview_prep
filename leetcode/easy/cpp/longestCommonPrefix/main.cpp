#include <iostream>
#include <vector>


class Solution {
	public:
		std::string longestCommonPrefix(std::vector<std::string> &strs) {
			if(strs.empty()) return "";

			std::string window = strs[0];
			for(int i = 1; i < strs.size(); i++) {
				while(strs[i].find(window) != 0) {
					window = window.substr(0, window.size() - 1);
					if(window.empty()) return "";
				}
			}
			return window;
		}


};

int main() {
	Solution solution;
	std::vector<std::string> test1 = { "flower", "flow", "flight" };
	std::vector<std::string> test2 = { "dog", "racecar", "car" };

	std::cout << "Test 1:" << std::endl;
	std::cout << solution.longestCommonPrefix(test1) << std::endl;
	std::cout << "Test 2:" << std::endl;
	std::cout << solution.longestCommonPrefix(test2) << std::endl;


	return 0;
}
