# python3

import sys

n, k = [int(x) for x in input().split()]
s = input()

if s.find('G')>s.find('T'):
    s = s[::-1]
for i in s[s.find('G'):s.find('T')+1:k]:
    if i == 'T':
        print('YES')
        sys.exit(0)
    elif i == '#':
        break
    
print('NO')
