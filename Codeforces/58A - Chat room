# python3

s = input()

try:
    p = [x for x in s if x in 'hello']
    p[:p.index('h')] = []
    p[len(p) - p[::-1].index('o'):] = []
    p = list(filter(lambda x: x!='h' and x!='o', p[1:-1]))
    i = p.index('e')
    if p[i+1:].count('l') >= 2:
        print('YES')
    else:
        print('NO')
except ValueError:
    print('NO')
