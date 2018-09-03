# Python3
# Problem Statement: https://www.hackerrank.com/challenges/python-mutations/problem


s = input('')
c = input('').split()
c[0] = int(c[0])
print(s[:c[0]]+c[1]+s[c[0]+1:])
