# python3

n = int(input())
s = []
for i in range(n):
    s.append(input())
    
x = 0
for i in s[:]:
    if '+' in i:
        x += 1
    elif '-' in i:
        x -= 1
        
print(x)
