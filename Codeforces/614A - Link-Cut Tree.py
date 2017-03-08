# python3

a = list(map(int, input().split(' ')))
l, r, k = a[0], a[1], a[2]
i, m, f = 0, 0, 0
while m<l:
    m = pow(k,i)
    i += 1
    
p = []
while m>=l and m<=r:
    p.append(m)
    m = pow(k,i)
    i += 1
    f = 1
    
if f==1:
    for j in p[:]:
        print(j, end = ' ')
else:
    print("-1")
