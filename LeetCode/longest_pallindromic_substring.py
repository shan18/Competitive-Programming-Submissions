# python3
# Problem Statement: https://leetcode.com/problems/longest-palindromic-substring/


class Solution:

    def __int__(self):
        self.s = ''
        self.mps = ''

    def pallindrome(self, c, mode):
        si = c - 1 if mode == 'odd' else c
        ei = c + 1
        while si >= 0 and ei < len(self.s):
            if self.s[si] != self.s[ei]:
                break
            si -= 1
            ei += 1

        if mode == 'odd':
            if self.s[si+1] == self.s[ei-1]:
                self.mps = max(self.mps, self.s[si+1:ei], key=len)
        else:
            si += 1
            ei -= 1
            if si >=0 and ei < len(self.s) and si < ei:
                self.mps = max(self.mps, self.s[si:ei+1], key=len)

    def longestPalindrome(self, s: str) -> str:
        if len(s) < 1:
            return s

        self.s = s
        self.mps = s[0]

        for i in range(len(self.s)):
            self.pallindrome(i, 'odd')
            self.pallindrome(i, 'even')

        return self.mps

