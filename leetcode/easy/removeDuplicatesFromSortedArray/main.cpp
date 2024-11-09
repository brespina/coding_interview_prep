// removeDuplicatesFromSortedArray/main.cpp

#include <iostream>
#include <vector>

class Solution {
	public:
		int removeDuplicates(std::vector<int> &nums) {
			if(nums.empty()) { return 0; }

			int i = 1;

			for(int j = 1; j < nums.size(); j++) {
				if(nums[j] != nums[i - 1]) { 
					nums[i] = nums[j];
					i++; 
				}
			}

			for(int k = i; k < nums.size(); k++) { nums[k] = -1; }
			return i;
		}
};

int main() {
	Solution solution;

	std::cout << "Test case 1:" << std::endl;

	std::vector<int> nums1 = {1, 1, 2};
	std::cout << "(1) nums1 before" << std::endl;

	for(int i = 0; i < nums1.size(); i++) {
		std::cout << nums1[i] << " ";
	}
	std::cout << std::endl;
	solution.removeDuplicates(nums1);
	std::cout << "(1) nums1 after" << std::endl;

	for(int i = 0; i < nums1.size(); i++) {
		std::cout << nums1[i] << " ";
	}
	std::cout << std::endl;

	// test 2
	std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	std::cout << "(2) nums2 before" << std::endl;

	for(int i = 0; i < nums2.size(); i++) {
		std::cout << nums2[i] << " ";
	}

	std::cout << std::endl;
	solution.removeDuplicates(nums2);
	std::cout << "(2) nums2 after" << std::endl;

	for(int i = 0; i < nums2.size(); i++) {
		std::cout << nums2[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
