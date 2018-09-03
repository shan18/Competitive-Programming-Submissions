# Python3
# Problem Statement: https://www.hackerrank.com/challenges/python-tuples/problem


p = []
N = 0
while True:
    N = int(input(""))
    s = input("")
    p = s.split(' ')
    if len(p) == N:
        break
        
for i in range(N):
    p[i] = int(p[i])
T = tuple(p)
print(hash(T))
