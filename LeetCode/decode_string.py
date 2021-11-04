# Python3
# Problem Statement: https://leetcode.com/problems/decode-string/

class Solution:
    def decode(self, s, number):
        start, end = -1, -1
        out, num = '', 0
        skip_pair = 0
        for i in range(len(s)):
            if s[i] == '[':
                if start == -1:
                    start = i
                else:
                    skip_pair += 1
            elif s[i] == ']':
                if skip_pair > 0:
                    skip_pair -= 1
                else:
                    end = i
                    out += self.decode(s[start + 1:end], num)
                    start, end = -1, -1
                    num = 0
            elif s[i].isdigit() and start == -1:
                num  = num * 10 + int(s[i])
            elif start == -1 and end == -1:
                out += s[i]
        
        return out * number
            
    
    def decodeString(self, s: str) -> str:
        return self.decode(s, 1)
