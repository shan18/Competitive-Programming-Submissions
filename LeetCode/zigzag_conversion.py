# python3
# Problem Statement: https://leetcode.com/problems/zigzag-conversion/


class Solution:
    
    def __init__(self):
        self.count_mode = 'inc'
        self.count = 0
        self.numRows = None
    
    def update_count(self):
        # Update value
        if self.count_mode == 'inc':
            self.count += 1
        else:
            self.count -= 1
        
        # Switch mode if needed
        if self.count < 0:
            self.count_mode = 'inc'
            self.count = 1
        elif self.count >= self.numRows:
            self.count_mode = 'dec'
            self.count = self.numRows - 2
    
    def convert(self, s: str, numRows: int) -> str:
        # Base case
        if numRows == 1:
            return s
        
        # Initialize
        self.numRows = numRows
        
        # Store pattern
        row = {x: [] for x in range(self.numRows)}
        for c in s:
            row[self.count].append(c)
            self.update_count()
        
        # Get string
        final_str = ''
        for c in row.values():
            final_str += ''.join(c)
        
        return final_str

