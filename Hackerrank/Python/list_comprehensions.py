# Python3
# Problem Statement: https://www.hackerrank.com/challenges/list-comprehensions/problem


X = int(input(''))
Y = int(input(''))
Z = int(input(''))
N = int(input(''))

p = []
for x in range(X+1):
    for y in range(Y+1):
        for z in range(Z+1):
            p.append([x,y,z])

c = [m for m in [k for k in p if (k[0]+k[1]+k[2])!=N]]
print(c)
