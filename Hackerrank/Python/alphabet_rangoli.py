# Python3
# Problem Statement: https://www.hackerrank.com/challenges/alphabet-rangoli/problem


n = int(input())
d = {}
for i in range(97, 123):
    d[i-96] = chr(i)
    
w = (n*2-1)*2-1 #width

#Top cone
for i in range(n,0,-1):
    line = []
    for j in range(n,i-1,-1):
        line.append(d[j])
    for j in range(i+1,n+1):
        line.append(d[j])
    print(('-'.join(line)).center(w, '-'))
    
#Bottom Cone
for i in range(2,n+1):
    line = []
    for j in range(n, i-1, -1):
        line.append(d[j])
    for j in range(i+1, n+1):
        line.append(d[j])
    print(('-'.join(line)).center(w, '-'))
