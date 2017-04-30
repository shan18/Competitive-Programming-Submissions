# python3
# link: http://www.spoj.com/problems/TEST/

p = []
while True:
    a = input("")
    p.append(a)
    if a == '42':
        p.append(input(""))
        break

for i in p[:-2]:
    print(i)
