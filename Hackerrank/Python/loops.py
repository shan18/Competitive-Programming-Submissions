# Python2
# Problem Statement: https://www.hackerrank.com/challenges/python-loops/problem


# Enter your code here. Read input from STDIN. Print output to STDOUT
N = 0
while True:
    N = int(raw_input(""))
    if N>=1 and N<=20:
        break
        
for i in range(N):
    print i*i
