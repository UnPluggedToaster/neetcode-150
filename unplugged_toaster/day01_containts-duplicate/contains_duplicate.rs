use std::collections::HashSet; 

struct Solution {}

impl Solution {

    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        
        let mut hash_set: HashSet<i32> = HashSet::new(); 

        for it in nums { 
            if hash_set.contains(&it) { 
                return true; 
            }
            hash_set.insert(it); 
        }

        return false; 
    }
}

fn main() { 
    let test = vec![1, 2, 3, 1];
    let test2 = vec![1, 2, 3, 4];

    println!("Test 1: {}", Solution::contains_duplicate(test));
    println!("Test 2: {}", Solution::contains_duplicate(test2));
}