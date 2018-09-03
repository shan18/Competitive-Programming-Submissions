# Python2
# Problem Statement: https://www.hackerrank.com/challenges/python-integers-come-in-all-sizes/problem


# Enter your code here. Read input from STDIN. Print output to STDOUT
a,b,c,d = 0,0,0,0
while True:
    a = int(raw_input(""))
    b = int(raw_input(""))
    c = int(raw_input(""))
    d = int(raw_input(""))
    if a>=1 and a<=1000 and b>=1 and b<=1000 and c>=1 and c<=1000 and d>=1 and d<=1000:
        break

print pow(a,b)+pow(c,d)
