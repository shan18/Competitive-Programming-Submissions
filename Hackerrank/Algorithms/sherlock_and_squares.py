# python3
# link: https://www.hackerrank.com/challenges/sherlock-and-squares

import math

t = int(input())
for i in range(t):
    a,b = list(map(int, input().split()))
    a = math.ceil(math.sqrt(a))
    b = math.floor(math.sqrt(b))
    print(b-a+1)
