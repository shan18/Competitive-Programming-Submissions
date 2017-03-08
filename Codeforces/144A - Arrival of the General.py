# python3

n = int(input())
p = [int(x) for x in input().split(' ')]

sw = 0
mx = p.index(max(p))
for i in range(mx, 0, -1):
    sw += 1
    p[i], p[i-1] = p[i-1], p[i]

if p.index(min(p)) != p[len(p)-1]:
    mn = p[::-1].index(min(p))
    sw += mn

print(0 if sw==-1 else sw)
