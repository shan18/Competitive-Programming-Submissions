# python3

n, n1, n2 = [int(x) for x in input().split()]
p = sorted([int(x) for x in input().split()], reverse=True)

tn1, tn2 = n1, n2
ln1, ln2 = [], []

if n1<=n2:
    while tn1!=0:
        ln1.append(p[0])
        del(p[0])
        tn1 -= 1
else:
    while tn2!=0:
        ln2.append(p[0])
        del(p[0])
        tn2 -= 1
        
while tn1!=0:
    ln1.append(p[0])
    del(p[0])
    tn1 -= 1
while tn2!=0:
    ln2.append(p[0])
    del(p[0])
    tn2 -= 1
    
print((sum(ln1)/n1)+(sum(ln2)/n2))
