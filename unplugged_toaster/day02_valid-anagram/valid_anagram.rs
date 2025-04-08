use std::collections::HashMap; 

struct Solution {
}

impl Solution { 

    pub fn is_anagram(&self, s: String, t: String) -> bool { 

        if s.chars().count() != t.chars().count() { 
            return false; 
        }

        let mut _hash_mp_ : HashMap<char, i32> = HashMap::new();  

        for (s_char, t_char) in s.chars().zip(t.chars()) { 
            *_hash_mp_.entry(s_char).or_insert(0) += 1; 
            *_hash_mp_.entry(t_char).or_insert(0) -= 1; 

        }

        return _hash_mp_.values().all(|&count| count == 0)
    }
}

fn main() {
    let solution = Solution{}; 

    println!("Test 1: {}", solution.is_anagram("care".to_string(), "race".to_string()));
    println!("Test 2: {}", solution.is_anagram("eekk".to_string(), "ggii".to_string()));
    println!("Test 3: {}", solution.is_anagram("rat".to_string(), "ggez".to_string())); 
} 