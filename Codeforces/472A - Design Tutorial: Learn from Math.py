# python3

from math import sqrt

def prime(p):
    for i in range(2, int(sqrt(p))+1):
        if p%i==0:
            return False
    return True

n = int(input())
if n==12:
    print(4, 8, sep=' ')
else:
    if prime(n-9):
        print(10, n-10, sep=' ')
    else:
        print(9, n-9, sep=' ')
