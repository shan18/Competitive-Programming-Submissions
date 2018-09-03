# Python3
# Problem Statement: https://www.hackerrank.com/challenges/symmetric-difference/problem


M, N, P, Q = 0, 0, [], []
while True:
    M = int(input(''))
    s = input('')
    P = s.split()
    N = int(input(''))
    t = input('')
    Q = t.split()
    if len(P)==M and len(Q)==N:
        break
        
A = set(list(map(int,P)))
B = set(list(map(int,Q)))
C = list(A^B)
C.sort()
for i in C:
    print(i)
