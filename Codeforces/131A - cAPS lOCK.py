# python3

n = input()
if n.isupper():
    print(n.lower())
elif len(n)==1 and n.islower():
    print(n.upper())
elif n[0].islower() and n[1:].isupper():
    print(n.swapcase())
else:
    print(n)
