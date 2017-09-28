# Python 3


test = int(input())
for t in range(test):
    n = int(input())
    f = 1
    for i in range(2, n+1):
        f *= i
    print(f)
