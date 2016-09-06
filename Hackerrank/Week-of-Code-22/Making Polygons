# python3
# link for question: https://www.hackerrank.com/contests/w22/challenges/polygon-making

n = int(input())
a = list(map(int, input().split(' ')))
a.sort(reverse=True)

cut = 0

for idx, val in enumerate(a[:]):
    p = sum(a)-val
    if val>=p:
        cut += 1
        a[idx:idx+1] = []
        a.extend([val/2, val/2])
        
print(cut)
