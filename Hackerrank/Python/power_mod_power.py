# Python2
# Problem Statement: https://www.hackerrank.com/challenges/python-power-mod-power/problem


# Enter your code here. Read input from STDIN. Print output to STDOUT
while True:
    a = int(raw_input(""))
    b = int(raw_input(""))
    m = int(raw_input(""))
    if a>=1 and a<=10 and b>=1 and b<=10 and m>=2 and m<=1000:
        break
       
print pow(a,b)
print pow(a,b,m)
