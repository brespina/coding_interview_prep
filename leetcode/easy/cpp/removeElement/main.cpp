#include <iostream>
#include <vector>

class Solution {
	public:
		int removeElement(std::vector<int> &nums, int val) {
			// iter is fast, index is slow
			int index = 0;
			for(int iter = 0; iter < nums.size(); iter++) {
				if(nums[iter] != val) {
					nums[index] = nums[iter];
					index++;
				}
			}
			for(int j = index; j < nums.size(); j++) {
				nums[j] = -1;
			}
			return index;

		}

};

int main() {
	Solution solution;
	std::vector<int> nums1 = {3, 2, 2, 3};
	std::vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};

	std::cout << "Test case 1: nums1 before: " << std::endl;
	for(int i = 0; i < nums1.size(); i++) {
		std::cout << nums1[i] << std::endl;
	}
	std::cout << "number of elements removed: " << solution.removeElement(nums1, 3) << std::endl;
	std::cout << "nums1 after" << std::endl;	
	for(int i = 0; i < nums1.size(); i++) {
		std::cout << nums1[i] << std::endl;
	}

	std::cout << "Test case 2: nums2 before: " << std::endl;
	for(int i = 0; i < nums2.size(); i++) {
		std::cout << nums2[i] << std::endl;
	}
	std::cout << "number of elements removed: " << solution.removeElement(nums2, 2) << std::endl;
	std::cout << "nums2 after" << std::endl;
	for(int i = 0; i < nums2.size(); i++) {
		std::cout << nums2[i] << std::endl;
	}


	return 0;
}
