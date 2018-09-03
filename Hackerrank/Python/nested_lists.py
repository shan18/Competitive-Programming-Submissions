# Python3
# Problem Statement: https://www.hackerrank.com/challenges/nested-list/problem


n = 0
while True:
    n = int(input(''))
    if n>=2 and n<=5:
        break
        
p = []
while True:
    p = []
    for i in range(n):
        p.append([0,0])
        p[i][0] = input('')
        p[i][1] = float(input(''))
    s, k = p[0][1], 0
    for i in range(1,len(p)):
        if s==p[i][1]:
            k += 1
    if k != (len(p)-1):
        break
        
min = 101
for i in p:
    if i[1]<min:
        min = i[1]
        
smin = 101
sminx = ['']
for i in p:
    if i[1]<smin and smin>min and i[1]>min:
        smin, sminx[0] = i[1], i[0]
        
for i in p:
    if i[1] == smin:
        sminx.append(i[0])
        
sminx = list(set(sminx))
sminx.sort()
for i in sminx:
    print(i)
