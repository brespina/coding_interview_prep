// validParentheses/prompt.txt

#include <iostream>
#include <string>
#include <stack>

/*
 * initial thought. use a stack and track popping?
 *
 */
class Solution {
	public:
		bool isValid(std::string s) {
			std::stack<char> st;
			for(char c : s) {
				// if c is open
				if (c == '(' || c == '{' || c == '[') {
					st.push(c);
					std::cout << st.top() << std::endl;
				}
				else {
					// only pushing open. so if close isn't approp open on top invalid
					if(st.empty() || 
						(c == ')' && st.top() != '(') ||
					   	(c == '}' && st.top() != '{') ||
						(c == ']' && st.top() != '[')) return false;
					st.pop();
				}
			}
			return st.empty();
		}

};

int main () {
	Solution solution;
	std::string test1 = "(){}[]";
	std::string test2 = "(({{[[]]}}))";
	std::string test3 = "{[}]()";

	std::cout << "test 1: " << solution.isValid(test1) << std::endl;
	std::cout << "test 2: " << solution.isValid(test2) << std::endl;
	std::cout << "test 3: " << solution.isValid(test3) << std::endl;


	return 0;
}
