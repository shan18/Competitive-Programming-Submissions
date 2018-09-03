# Python2
# Problem Statement: https://www.hackerrank.com/challenges/python-arithmetic-operators/problem


# Enter your code here. Read input from STDIN. Print output to STDOUT
a,b = 0,0
while True:
    a = int(raw_input(""))
    b = int(raw_input(""))
    if a>=1 and a<=pow(10,10) and b>=1 and b<=pow(10,10):
        break
        
print a+b
print a-b
print a*b
