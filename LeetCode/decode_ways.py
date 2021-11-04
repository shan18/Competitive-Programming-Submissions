# Python3
# Problem Statement: https://leetcode.com/problems/decode-ways/

class Solution:
    def numDecodings(self, s: str) -> int:
        if s[0] == '0':
            return 0
        elif len(s) == 1:
            return 1
        
        single_select = [0] * len(s)
        if s[-1] != '0': single_select[-1] = 1
        if s[-2] != '0': single_select[-2] = single_select[-1]
        
        double_select = [0] * len(s)
        if s[-2] != '0' and int(s[-2:]) < 27:
            double_select[-2] = 1
        
        if len(s) == 2:
            return single_select[0] + double_select[0]
        
        for i in range(len(s) - 3, -1, -1):
            if s[i] != '0':
                single_select[i] = single_select[i + 1] + double_select[i + 1]
                if int(s[i:i + 2]) < 27:
                    double_select[i] = single_select[i + 2] + double_select[i + 2]
        
        return single_select[0] + double_select[0]
