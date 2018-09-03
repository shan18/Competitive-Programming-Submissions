# Python3
# Problem Statement: https://www.hackerrank.com/challenges/finding-the-percentage/problem


# Enter your code here. Read input from STDIN. Print output to STDOUT
N = 0
while True:
    N = int(raw_input(""))
    if N>=2 and N<=10:
        break
        
d = {}
for i in range(N):
    f = []
    while True:
        de = raw_input("")
        f = de.split(" ")
        f[1], f[2], f[3] = float(f[1]), float(f[2]), float(f[3])
        if f[1]>=0 and f[2]>=0 and f[3]>=0 and f[1]<=100 and f[2]<=100 and f[3]<=100:
            break
    d[f[0]] = [f[1], f[2], f[3]]
    
name = raw_input("")
p = d[name]
s = (p[1]+p[2]+p[0])/3
print "%0.2f" %s
