# Python3
# Problem Statement: https://www.hackerrank.com/challenges/ctci-ice-cream-parlor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=search


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the whatFlavors function below.
def whatFlavors(cost, money):
    d = {}
    for i in range(len(cost)):
        if cost[i] not in d:
            d[cost[i]] = [i]
        else:
            d[cost[i]].append(i)
    
    for i in range(len(cost)):
        cmp = money - cost[i]
        cmp_idx = -1
        if cmp in d:
            for idx in d[cmp]:
                if idx != i:
                    cmp_idx = idx
                    break
        if cmp_idx != -1:
            print(i+1, cmp_idx+1)
            break
            

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        money = int(input())

        n = int(input())

        cost = list(map(int, input().rstrip().split()))

        whatFlavors(cost, money)
