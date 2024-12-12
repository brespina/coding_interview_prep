// medium/integerToRoman/main.cpp

#include <iostream>
#include <vector>
#include <string>

/*
 * "I" = 1           "IV" = 4
 * "V" = 5           "IX" = 9
 * "X" = 10          "XL" = 40
 * "L" = 50          "XC" = 90
 * "C" = 100         "CD" = 400
 * "D" = 500         "CM" = 900
 * "M" = 1000         
 *  
 */

class Solution {
	public:
		std::string intToRoman(int num) {
			const std::vector<std::pair<int, std::string> > symbolExchange {
				{1000, "M"}, {900, "CM"},{500, "D"},{400, "CD"},
				{100, "C"},{90, "XC"},{50, "L"},{40, "XL"},{10, "X"},
				{9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

			std::string result = "";

			for(const auto& [value, symbol] : symbolExchange) {
				while(num >= value) {
					result += symbol;
					num -= value;
				}
			}

			return result;
		}
};

int main() {
	Solution solution;

	int test0 = 3749;  // ans: "MMMDCCXLIX"
	int test1 = 58;    // ans: "LVIII"
	int test2 = 1994;  // ans: "MCMXCIV"
	std::string ans0 = "MMMDCCXLIX";
	std::string ans1 = "LVIII";
	std::string ans2 = "MCMXCIV";
	std::cout << "test 0: " << solution.intToRoman(test0) << " | ans0: " << ans0 << std::endl;
	std::cout << "test 1: " << solution.intToRoman(test1) << " | ans1: " << ans1 << std::endl;
	std::cout << "test 2: " << solution.intToRoman(test2) << " | ans2: " << ans2 << std::endl;

	return 0;
}
