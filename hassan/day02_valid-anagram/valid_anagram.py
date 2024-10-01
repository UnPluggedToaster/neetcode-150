class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        hashS = 0 
        hashT = 0 
        
        if (len(s) != len(t)):
            return False
        
        for i in range(0, len(s)):
            hashS += hash(s[i])
            hashT += hash(t[i])

        return hashS == hashT