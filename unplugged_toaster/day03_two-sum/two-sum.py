class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        mp = {} 

        for i in range(0, len(nums)): 
            x = target - nums[i]

            if x in mp:
                return [mp[x], i]
        
            mp[nums[i]] = i

        return [] 