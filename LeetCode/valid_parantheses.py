# Python3
# Problem Statement: https://leetcode.com/problems/valid-parentheses/

class Solution:
    def isValid(self, s: str) -> bool:
        l = []
        d = {')': '(', '}': '{', ']': '['}
        for i in s:
            if i == '(' or i == '{' or i == '[':
                l.append(i)
            else:
                if len(l) == 0 or l[-1] != d[i]:
                    return False
                l.pop()
        
        if len(l) == 0:
            return True
        return False
