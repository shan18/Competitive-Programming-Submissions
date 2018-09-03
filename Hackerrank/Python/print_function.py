# Python3
# Problem Statement: https://www.hackerrank.com/challenges/python-print/problem


l= []
list(map(l.append, list(range(1, int(input(""))+1))))
for i in l[:]:
    print(i, end='')
