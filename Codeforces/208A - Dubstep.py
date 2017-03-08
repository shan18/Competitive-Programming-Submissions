# python3

s = input()
s = s.replace('WUB', ' ').strip().split(' ')
for f in s:
    if f != '':
        print(f, end=' ')
