// C++
// Problem Statement: https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    map<int, vector<string>> nums;
    
    void setNums() {
        nums[2] = {"a", "b", "c"};
        nums[3] = {"d", "e", "f"};
        nums[4] = {"g", "h", "i"};
        nums[5] = {"j", "k", "l"};
        nums[6] = {"m", "n", "o"};
        nums[7] = {"p", "q", "r", "s"};
        nums[8] = {"t", "u", "v"};
        nums[9] = {"w", "x", "y", "z"};
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        
        if(digits == "") {
            return combinations;
        }
        
        setNums();
        
        if(digits.size() == 1) {
            return nums[stoi(digits)];
        }
        
        combinations.insert(combinations.end(), nums[digits[0] - 48].begin(), nums[digits[0] - 48].end());
        
        for(int k = 1; k < digits.size(); k++) {
            vector<string> newChars = nums[digits[k] - 48];
            int size = combinations.size();
            for(int i = 0; i < size; i++) {
                for(int j = 1; j < newChars.size(); j++) {
                    combinations.push_back(combinations[i] + newChars[j]);
                }
                combinations[i] += newChars[0];
            }
        }
        
        return combinations;
    }
};
