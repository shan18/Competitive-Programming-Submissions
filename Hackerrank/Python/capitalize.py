# Python3
# Problem Statement: https://www.hackerrank.com/challenges/capitalize/problem


s = input()
p = s.split()
for i in range(len(p)):
    if p[i][0].isalpha() == True:
        p[i] = p[i].capitalize()
        
p = list(''.join(p))
for i in range(len(s)):
    if s[i]==' ':
        p.insert(i, ' ')
        
print(''.join(p))
