# Python3
# Problem Statement: https://www.hackerrank.com/challenges/python-lists/problem


N = int(input(""))
l = []
for i in range(N):
    c = input("").split(' ')
    if len(c)==2:
        c[1] = int(c[1])
    elif len(c)==3:
        c[1], c[2] = int(c[1]), int(c[2])
    
    if c[0]=='append':
        l.append(c[1])
    elif c[0]=='insert':
        l.insert(c[1], c[2])
    elif c[0]=='remove':
        l.remove(c[1])
    elif c[0]=='pop':
        l.pop()
    elif c[0]=='index':
        print(l.index(c[1]))
    elif c[0]=='count':
        print(l.count(c[1]))
    elif c[0]=='sort':
        l.sort()
    elif c[0]=='reverse':
        l.reverse()
    elif c[0]=='print':
        print(l)
