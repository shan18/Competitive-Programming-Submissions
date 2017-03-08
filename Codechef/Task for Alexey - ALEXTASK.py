# python3

def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x

def lcm(a,b):
    if a == 1:
        return a
    elif b == 1:
        return b
    elif a == 2:
        if b%2 == 0:
            return b
        elif b%2 != 0:
            return b*2
    elif b == 2:
        if a%2 == 0:
            return a
        elif a%2 != 0:
            return a*2
    else:
        return (a*b)//gcd(a,b)

test = int(input())
for t in range(test):
    n = int(input())
    a = [int(x) for x in input().split()]
    a.sort()
    if a[0] == 1:
        print(min(a[1:]))
    else:
        mini = lcm(a[0], a[1])
        for i in range(len(a)-1):
            for j in range(i+1, len(a)):
                if a[i] == a[j] and mini > a[i]:
                    mini = a[i]
                    break
                elif mini > lcm(a[i], a[j]):
                    mini = lcm(a[i], a[j])
        print(mini)
