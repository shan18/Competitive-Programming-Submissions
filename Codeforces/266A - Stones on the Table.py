# python3

n = int(input())
s = list(input())

m = 0

for f in range(len(s)-1):
    if s[f] == s[f+1]:
        m += 1
        
print(m)
