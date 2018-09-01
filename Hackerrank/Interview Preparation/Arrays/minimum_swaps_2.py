# Python3
# Problem Statement: https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    arr_sorted = sorted(arr)
    arr_map = {v:i for i,v in enumerate(arr)}
    swaps = 0
    
    for i, v in enumerate(arr):
        val = arr_sorted[i]
        if val != v:
            idx = arr_map[val]
            arr[idx], arr[i] = v, val
            arr_map[v] = idx
            arr_map[val] = i
            swaps += 1
    return swaps

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()

