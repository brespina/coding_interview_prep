/*
    author: brespina
    NOTE: since this was a sample test, i did not copy paste this. but 
    the question remains the same
    desc: iterate through a range [1, n] and for each i, 
        if i multiple of 3 -> print("Fizz")
        if i multiple of 3 -> print("Fizz")
        if both -> print("FizzBuzz")
        else -> print(i)
    constraints: 
        1. 0 < n, arr[i] <= 100
    idea:
        originally, obvious answer came to mind, iterate thru all
        have unique printing variables for all the cases, however,
        the look of the string "FizzBuzz" immediately screamed
        string concatenation.
*/

// im sure this can be optimized but i was quite happy with this.
#include <iostream>
#include <string>

void fizzBuzz(int n) {
    for(int i = 1; i <= n; i++) {
        std::string result = "";
        //first check if not multiple so we can use `continue`
        if(i % 3 != 0 && i % 5 != 0 ) {
            result.append(std::to_string(i));
            std::cout << result << std::endl; 
            continue;
        }
        if(i % 3 == 0) { result.append("Fizz"); }
        if(i % 5 == 0) { result.append("Buzz"); }

        std::cout << result << std::endl;
    }
}


int main() {
    fizzBuzz(100);  
    return 0;
}
