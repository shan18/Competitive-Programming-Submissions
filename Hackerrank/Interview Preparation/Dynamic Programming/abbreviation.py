# Python3
# Problem Statement: https://www.hackerrank.com/challenges/abbr/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the abbreviation function below.
sys.setrecursionlimit(2000)  # Increase recursion limit

def subs(a, b, c):
    if len(a) < len(b):
        return False
    if b == '':
        if a == a.lower():
            return True
        else:
            return False
    
    if c[len(b)][len(a)] != None:
        return c[len(b)][len(a)]
    
    if a[-1] == b[-1]:
        c[len(b)][len(a)] = subs(a[:-1], b[:-1], c)
    else:
        if a[-1].isupper():
            return False
        else:
            if a[-1].upper() != b[-1]:
                c[len(b)][len(a)] = subs(a[:-1], b, c)
            else:
                c[len(b)][len(a)] = subs(a[:-1], b, c) or subs(a[:-1] + a[-1].upper(), b, c)
    return c[len(b)][len(a)]
            

def abbreviation(a, b):
    c = [[None] * (len(a) + 2) for i in range(len(b) + 2)]
    r = subs(a, b, c)
    if r:
        return 'YES'
    return 'NO'
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        a = input()

        b = input()

        result = abbreviation(a, b)

        fptr.write(result + '\n')

    fptr.close()
