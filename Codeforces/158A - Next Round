# python3

import sys

p = input().split(' ')
n, k = list(map(int, p))

a = list(map(int, input().split(' ')))

num = 0

if k == 1:
    if a[0] == 0:
        print(0)
        sys.exit(0)
elif all(v == 0 for v in a[:k-1]):
    print(0)
    sys.exit(0)
    
for i in a[:k-1]:
    if i != 0:
        num += 1
    
for i in a[k:]:
    if i != a[k-1] or a[k-1] == 0:
        break
    num += 1

if a[k-1] == 0:
    print(num)
else:
    print(num+1)
