# python3

def hcf(m, left):
    if m == 0:
        return left
    return hcf(left%m, m)

    
a, b, n = [int(x) for x in input().split(' ')]
i = 0
while n>=hcf(a,n) or n>=hcf(b,n):
    if i%2 == 0:
        n -= hcf(a,n)
    else:
        n -= hcf(b,n)
    i += 1
    
print(1 if i%2==0 else 0)
