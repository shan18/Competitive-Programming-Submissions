# Python3
# Problem Statement: https://www.hackerrank.com/challenges/special-palindrome-again/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=strings


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the substrCount function below.
def substrCount(n, s):
    l = []
    last_char = s[0]
    last_count = 1
    for i in range(1, len(s)):
        if s[i] == last_char:
            last_count += 1
        else:
            l.append((last_char, last_count))
            last_char = s[i]
            last_count = 1
    l.append((last_char, last_count))
    count = 0
    for i, j in l:
        count += (j * (j+1)) // 2
    
    for i in range(1, len(l) - 1):
        if l[i-1][0] == l[i+1][0] and l[i][1] == 1:
            count += min(l[i-1][1], l[i+1][1])
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = substrCount(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
