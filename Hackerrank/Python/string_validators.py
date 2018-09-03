# Python3
# Problem Statement: https://www.hackerrank.com/challenges/string-validators/problem


while True:
    s = input('')
    if len(s)>0 and len(s)<1000:
        break
        
f = 0
for i in s:
    if i.isalnum()==True:
        f = 1
        break
if f==1:
    print('True')
else:
    print('False')
    
f = 0
for i in s:
    if i.isalpha()==True:
        f = 1
        break
if f==1:
    print('True')
else:
    print('False')
    
f = 0
for i in s:
    if i.isdigit()==True:
        f = 1
        break
if f==1:
    print('True')
else:
    print('False')
    
f = 0
for i in s:
    if i.islower()==True:
        f = 1
        break
if f==1:
    print('True')
else:
    print('False')
    
f = 0
for i in s:
    if i.isupper()==True:
        f = 1
        break
if f==1:
    print('True')
else:
    print('False')
