#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string> 
#include <ranges> 
#include <unordered_map>


class Solution { 
    public: 
        static bool isAnalog(std::string s, std::string t) { 

            if (s.length() != t.length()) { 
                return false;
            }

            std::unordered_map<char, int> hash_mp_s = {}; 
            std::unordered_map<char, int> hash_mp_t = {}; 

            for (int i = 0; i < s.length(); i ++) { 
                hash_mp_s[s[i]]++; 
                hash_mp_t[t[i]]++; 
            }

            return hash_mp_s == hash_mp_t; 
        }
};

 
int main() { 
    std::cout << Solution::isAnalog("care", "race") << std::endl;
    std::cout << Solution::isAnalog("eekk", "ggii") << std::endl; 

}