# Python3
# Problem Statement: https://www.hackerrank.com/challenges/text-wrap/problem


import textwrap

while True:
    s = input('')
    w = int(input(''))
    if len(s)>0 and len(s)<1000 and w>0 and w<len(s):
        break
        
print(textwrap.fill(s,w))
