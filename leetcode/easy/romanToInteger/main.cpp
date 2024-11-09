#include <iostream>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
		std::unordered_map<char, int> numMap;
		
        numMap['I'] = 1;
        numMap['V'] = 5;
        numMap['X'] = 10;
        numMap['L'] = 50;
        numMap['C'] = 100;
        numMap['D'] = 500;
        numMap['M'] = 1000;

        int result = 0;

        for(int i = 0; i < s.length(); i++) {
            if (numMap[s[i]] < numMap[s[i + 1]]) {
                result -= numMap[s[i]];
            }
            else {
                result += numMap[s[i]];
            }
        }
        return result;
    }
};

int main() {
	Solution solution;

	std::cout << solution.romanToInt("VII") << std::endl;
	std::cout << solution.romanToInt("X") << std::endl;
	std::cout << solution.romanToInt("LCXIV") << std::endl;

	return 0;
}
