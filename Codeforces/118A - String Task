# python3

s = list(input())
v = ['a', 'e', 'i', 'o', 'u', 'y']
v.extend('.'.join(v).swapcase().split('.'))
k = ''

for i in s[:]:
    if i not in v:
        k += '.' + i.lower()
        
print(k)
