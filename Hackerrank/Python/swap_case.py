# Python3
# Problem Statement: https://www.hackerrank.com/challenges/swap-case/problem


s = 0
while True:
    s = input('')
    if len(s)>0 and len(s)<=1000:
        break
        
print(s.swapcase())
