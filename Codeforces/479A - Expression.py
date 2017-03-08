# python3

a = int(input())
b = int(input())
c = int(input())
l = [a,b,c]

s = sum(l)
p = a*b*c
e1 = (a+b)*c
e2 = a*(b+c)

print(max(s,p,e1,e2))
