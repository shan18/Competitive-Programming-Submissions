# Python3
# Problem Statement: https://leetcode.com/problems/longest-common-prefix/

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = {i: v for i, v in enumerate(strs[0])}
        maxCount = len(strs[0])
        for item in strs:
            count = 0
            for idx, char in enumerate(item):
                currentChar = prefix.get(idx)
                if currentChar != char:
                    break
                count += 1
            maxCount = min(maxCount, count)
            if maxCount == 0: break
        
        return "".join([prefix[x] for x in range(maxCount)])
