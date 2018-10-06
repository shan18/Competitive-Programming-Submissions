# Python3
# Problem Statement: https://www.hackerrank.com/challenges/fraudulent-activity-notifications/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=sorting


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the activityNotifications function below.
def activityNotifications(expenditure, d):
    notifications = 0
    count = [0] * 201
    for i in range(d):
        count[expenditure[i]] += 1
    
    for i in range(d, len(expenditure)):
        c = 0
        if d % 2 != 0:
            for j in range(len(count)):
                c += count[j]
                if c > int(d/2):
                    med = j
                    break
        else:
            m = 0
            n = 0
            for j in range(len(count)):
                c += count[j]
                if c >= int(d/2) and m == 0:
                    m = j
                if c - 1 >= int(d/2) and n == 0:
                    n = j
                    break
            med = (m + n) / 2
        if 2 * med <= expenditure[i]:
            notifications += 1
        count[expenditure[i]] += 1
        count[expenditure[i-d]] -= 1
    
    return notifications

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    expenditure = list(map(int, input().rstrip().split()))

    result = activityNotifications(expenditure, d)

    fptr.write(str(result) + '\n')

    fptr.close()
