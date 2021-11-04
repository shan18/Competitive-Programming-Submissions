# Python3
# Problem Statement: https://leetcode.com/problems/happy-number/

class Solution:
    def getSumSquare(self, n):
        return sum([int(x) ** 2 for x in str(n)])
    
    def isHappy(self, n: int) -> bool:
        if n == 1:
            return True
        
        store = {n: 1}
        while n != 1:
            n = self.getSumSquare(n)
            if store.get(n):
                return False
            else:
                store[n] = 1
        
        return True
