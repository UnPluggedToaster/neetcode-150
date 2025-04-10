#include <iostream>
#include <vector>
#include <ranges>

class Solution { 
    public: 
        std::vector<int> static twoSum(std::vector<int>& nums, int target) { 

            for (int i = 0; i < nums.size(); i ++) {

                auto index = std::ranges::find(nums.begin() + i + 1, 
                nums.end(), target - nums[i]); 

                if (index != nums.end()) { 
                    return {i, 
                        static_cast<int>(std::distance(nums.begin(), index))};
                }
            }
            return {}; 
        }
};

int main() {
    std::vector<int> numbers = {3,4,5,6};
    auto retval = Solution::twoSum(numbers, 7); 

    for (auto& it: retval) { 
        std::cout << it << ","; 
    }
}