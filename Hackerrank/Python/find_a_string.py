# Python3
# Problem Statement: https://www.hackerrank.com/challenges/find-a-string/problem


while True:
    s = input('')
    sub = input('')
    if len(s)>=1 and len(s)<=200:
        break
        
c = 0
for i in range(len(s)):
    if s.startswith(sub, i)==True:
        c += 1
        
print(c)
