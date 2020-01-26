# python3
# Problem Statement: https://leetcode.com/problems/longest-substring-without-repeating-characters/


class Solution:
    def __init__(self):
        self.s_idx = 0
        self.e_idx = 1
        self.max_len = 1
    
    def update_len(self, s):
        is_unique = (len(s) - len(set(s))) is 0
        if is_unique and len(s) > self.max_len:
            self.max_len = len(s)
        return is_unique
        
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) < 1:
            return 0
        
        while self.e_idx < len(s):
            is_unique = self.update_len(s[self.s_idx:self.e_idx+1])
            if is_unique:
                self.e_idx += 1
            else:
                self.s_idx += 1
        
        return self.max_len

