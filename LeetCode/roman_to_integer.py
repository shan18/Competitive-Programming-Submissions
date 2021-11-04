# Python3
# Problem Statement: https://leetcode.com/problems/roman-to-integer/

class Solution:
    def romanToInt(self, s: str) -> int:
        
        roman = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
            'IV': 4,
            'IX': 9,
            'XL': 40,
            'XC': 90,
            'CD': 400,
            'CM': 900,
        }
    
        number = 0
        i = 0
        extra = False
        while i < len(s):
            if i < len(s) - 1 and roman.get(s[i] + s[i+1]):
                number += roman.get(s[i] + s[i+1])
                i += 1
            else:
                number += roman[s[i]]
            i += 1
        
        return number
