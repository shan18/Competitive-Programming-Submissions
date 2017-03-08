# python3

n = int(input())
g = list(map(int, input().split(' ')))

car = g.count(4)
o = g.count(1)
t3 = g.count(3)
t2 = g.count(2)

if t3-o >= 0:
    car += t3
    o = 0
elif t3-o < 0:
    o -= t3
    car += t3
    
if t2%2 == 0:
    car += int(t2/2)
    t2 = 0
else:
    car += int(t2/2)
    t2 = 1
    if o <= 2:
        car += 1
        o = 0
    else:
        o -= 2
        car += t2
        
if o > 0:
    if o%4 == 0:
        car += int(o/4)
    else:
        car += int(o/4) + 1
    
print(car)
