# python3

n = int(input())
s = []
for i in range(n):
    s.append(input())
    
c = 0
for i in s[:]:
    if i.count('1') >= 2:
        c += 1
        
print(c)
