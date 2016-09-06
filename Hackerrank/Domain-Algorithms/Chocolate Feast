# python3
# link: https://www.hackerrank.com/challenges/chocolate-feast

t = int(input().strip())
for a0 in range(t):
    n,c,m = input().strip().split(' ')
    n,c,m = [int(n),int(c),int(m)]
    num = int(n/c)
    if num>=m:
        t = num
        while t>=m:
            t = t-m
            num = num+1
            t = t+1
    print(num)
