# python3


test = int(input())
for t in range(test):
    s = input()
    if len(s) == 2:
        if s[0] == 'C' or (s[0] == 'E' and (s[1] == 'E' or s[1] == 'S')) or s[1] == 'S':
            print('yes')
        else:
            print('no')
        continue
    for i in range(1, len(s) - 1):
        if s[i] == 'C' and s[i - 1] != 'C':
            print('no')
            break
        if s[i] == 'E' and (s[i - 1] == 'S' or s[i + 1] == 'C'):
            print('no')
            break
        if s[i] == 'S' and s[i + 1] != 'S':
            print('no')
            break
    else:
        print('yes') 
