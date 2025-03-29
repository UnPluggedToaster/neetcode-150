class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        hash_mp = {} 

        for i in nums: 

            if i not in hash_mp: 
                hash_mp[i] = 0

            else: 
                return True
            
        return False
