# python3

n = int(input())
s = [0]*100002

for i in map(int, input().split()):
    s[i] += i

for i in range(2, len(s)):
    s[i] = max(s[i-1], s[i] + s[i-2])

print(s[-1])
