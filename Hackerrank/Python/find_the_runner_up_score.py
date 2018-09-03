# Python3
# Problem Statement: https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem


n = 0
a = []
while True:
    f = 0
    n = int(input(''))
    a = input('').split()
    if n<2 or n>10 or len(a)!=n:
        continue
    a = list(map(int, a))
    for i in a:
        if i<-100 or i>100:
            f=1
            break
    if f==0:
        break
        
a = list(set(a))
a.sort()
print(a[len(a)-2])
        
