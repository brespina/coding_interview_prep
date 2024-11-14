#include <iostream>
#include <vector>

class Solution {
	public:
		int searchInsert(std::vector<int> &nums, int target) {
			int left = 0;			
			int right = nums.size() - 1;			

			while(left <= right) {
				int mid = left + (right - left) / 2;

				if (nums[mid] == target) { return mid; } 
				else if (nums[mid] > target) { right = mid - 1; } 
				else { left = mid + 1; }
			}

			return left;        
		}
};

int main() {
	std::vector<int> nums1 = {1, 3, 5, 7};
	int target1 = 5;
	Solution solution;
	std::cout << "target at index: " << solution.searchInsert(nums1, target1) << std::endl;

	return 0;
}
