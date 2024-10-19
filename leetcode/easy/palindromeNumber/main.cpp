#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int copy = x;
        if(copy < 0)
            return false;
        long long int reversed = 0;

        while(copy > 0) {
            int digit = copy % 10;
            reversed = reversed * 10 + digit;

            // std::cout << "number: " << copy << std::endl;
            // std::cout << "remainder: " << copy % 10 << std::endl;
            // std::cout << "divide by 10: " << copy / 10 << std::endl;

            copy /= 10;
        }

        return (x == reversed);
    }

};


int main() {

    Solution solution;
    
    std::cout << solution.isPalindrome(121);
    std::cout << solution.isPalindrome(12345678987654321);

    std::cout << solution.isPalindrome(-1234321);
    std::cout << solution.isPalindrome(0);

    return 0;
}