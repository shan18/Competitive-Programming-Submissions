# python3

n = int(input())
a, b = 2, 1
match = 0
while a<=n:
    a, b = a+b, a
    match += 1
    
print(match)
