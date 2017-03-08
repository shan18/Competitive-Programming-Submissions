# python3
# link: https://www.hackerrank.com/challenges/time-conversion

h = input().split(':')
t = [h[0], h[1], h[2][:2]]
t = list(map(int, t))
day = h[2][2:]
if day=='AM':
    if t[0] == 12:
        t[0] = 0
else:
    if t[0] != 12:
        t[0] += 12

for f in t[:-1]:
    if f<10:
        print('0',f, sep='', end=":")
    else:
        print(f, end=":")
        
if t[-1]<10:
    print('0',t[-1], sep='')
else:
    print(t[-1])
