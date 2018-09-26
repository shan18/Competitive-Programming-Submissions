# Python3
# Problem Statement: https://www.hackerrank.com/challenges/triple-sum/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=search


#!/bin/python3

import math
import os
import random
import re
import sys
from bisect import bisect

# Complete the triplets function below.
def triplets(a, b, c):
    a, b, c = sorted(set(a)), sorted(set(b)), sorted(set(c))
    return sum([bisect(a, i) * bisect(c, i) for i in b])

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    lenaLenbLenc = input().split()

    lena = int(lenaLenbLenc[0])

    lenb = int(lenaLenbLenc[1])

    lenc = int(lenaLenbLenc[2])

    arra = list(map(int, input().rstrip().split()))

    arrb = list(map(int, input().rstrip().split()))

    arrc = list(map(int, input().rstrip().split()))

    ans = triplets(arra, arrb, arrc)

    fptr.write(str(ans) + '\n')

    fptr.close()

