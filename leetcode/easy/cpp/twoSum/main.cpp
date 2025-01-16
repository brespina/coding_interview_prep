#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
	public:
		std::vector<int> twoSum(std::vector<long long int> &nums, int target) {
			std::unordered_map<long long int, int> hashMap;

			for(int i = 0; i < nums.size(); i++) {
				int diff = target - nums[i];
				if(hashMap.count(diff)) {
					return {hashMap[diff], i};
				}
				hashMap[nums[i]] = i;
			}
			return {};
		}

};

int main() {


	std::vector<long long int> nums = {1, 2, 3, 4, 194328, 4324324324234, 1222};
	Solution solution;
	std::vector<int> result;
	result = solution.twoSum(nums, 7);
	std::cout << result[0] << ", " << result[1] << std::endl;
	return 0;
}

