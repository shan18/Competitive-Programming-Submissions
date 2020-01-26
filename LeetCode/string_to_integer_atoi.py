# python3
# Problem Statement: https://leetcode.com/problems/string-to-integer-atoi/


import re

INT_MIN = pow(-2, 31)
INT_MAX = pow(2, 31) - 1

class Solution:
    def myAtoi(self, str: str) -> int:
        str = str.strip()
        if len(str) < 1:
            return 0
        if str[0] in ['+', '-'] or str[0].isdigit():
            s = str[0]
            for c in str[1:]:
                if not c.isdigit():
                    break
                s += c
            if len(s) == 1 and s[0] in ['+', '-']:
                return 0
            s = min(max(int(s), INT_MIN), INT_MAX)
            return s
        else:
            return 0

