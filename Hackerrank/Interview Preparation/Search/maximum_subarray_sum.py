# Python3
# Problem Statement: https://www.hackerrank.com/challenges/maximum-subarray-sum/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=search


#!/bin/python3

import math
import os
import random
import re
import sys

from bisect import bisect, insort

# Complete the maximumSum function below.
def maximumSum(a, m):
    prefix = [0] * len(a)
    current = 0
    for i in range(len(a)):
        current = (a[i] % m + current) % m
        prefix[i] = current
    
    pq = [prefix[0]]
    max_mod = max(prefix)
    for i in range(1, len(a)):
        insert = bisect(pq, prefix[i])
        if insert != len(pq):
            mod = (prefix[i] - pq[insert] + m) % m
            max_mod = max(max_mod, mod)
        insort(pq, prefix[i])
    
    return max_mod

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        nm = input().split()

        n = int(nm[0])

        m = int(nm[1])

        a = list(map(int, input().rstrip().split()))

        result = maximumSum(a, m)

        fptr.write(str(result) + '\n')

    fptr.close()
