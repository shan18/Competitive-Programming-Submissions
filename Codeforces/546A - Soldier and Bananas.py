# python3

k, n, w = [int(x) for x in input().split()]

total = int((w*(w+1))/2)
total *= k

if total-n >= 0:
    print(total-n)
else:
    print(0)
