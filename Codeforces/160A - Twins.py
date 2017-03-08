# python3

n = int(input())
l = list(map(int, input().split(' ')))
l.sort()

number = 0;
tot = 0;
i = 0

for f in l[::-1]:
    if tot > sum(l[:len(l)-i]):
        break
    tot += f
    number += 1
    i += 1
        
print(number)
