# Python3
# Problem Statement: https://www.hackerrank.com/challenges/ctci-connected-cell-in-a-grid/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=graphs


#!/bin/python3

import math
import os
import random
import re
import sys


def getRegionSize(grid, i, j):
    if not(i in range(len(grid)) and j in range(len(grid[0]))):
        return 0
    if grid[i][j] == 0:
        return 0
    count = 1
    grid[i][j] = 0
    count += getRegionSize(grid, i-1, j-1)
    count += getRegionSize(grid, i-1, j)
    count += getRegionSize(grid, i-1, j+1)
    count += getRegionSize(grid, i, j-1)
    count += getRegionSize(grid, i, j)
    count += getRegionSize(grid, i, j+1)
    count += getRegionSize(grid, i+1, j-1)
    count += getRegionSize(grid, i+1, j)
    count += getRegionSize(grid, i+1, j+1)
    return count

# Complete the maxRegion function below.
def maxRegion(grid):
    largest = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            size = getRegionSize(grid, i, j)
            largest = size if size > largest else largest
    return largest

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    m = int(input())

    grid = []

    for _ in range(n):
        grid.append(list(map(int, input().rstrip().split())))

    res = maxRegion(grid)

    fptr.write(str(res) + '\n')

    fptr.close()

