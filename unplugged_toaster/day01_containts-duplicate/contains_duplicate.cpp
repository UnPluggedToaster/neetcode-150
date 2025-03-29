#include <vector>
#include <unordered_set>

using namespace std; 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> mp = {};

        for (const auto& it : nums)
        {
            if (mp.contains(it)) { 
                return true;
            }
            mp.insert(it);
        }

    return false; 
    }
};