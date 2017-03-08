# python3

n = int(input())
p = [int(x) for x in input().split()]
p.insert(0,0)

for i in range(1, n+1):
    k = p.index(i)
    print(k, end = ' ')
