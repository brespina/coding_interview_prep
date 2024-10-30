#include <bits/stdc++.h>
/*
    essentially we use modulo to isolate the least significant digit.
    this digit will become our most significant digit for "reversed"
    integer divide by 10 to prep for next loop iteration.
    reversed is the exact opposite.
    multiply reversed by 10. add digit.



*/
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