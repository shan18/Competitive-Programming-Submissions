# python3

test = int(input())
for t in range(test):
    first = set([x for x in input().split()])
    second = set([x for x in input().split()])
    if len(first & second) >= 2:
        print("similar")
    else:
        print("dissimilar")
