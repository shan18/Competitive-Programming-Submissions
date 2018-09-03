# Python2
# Problem Statement: https://www.hackerrank.com/challenges/whats-your-name/problem


# Enter your code here. Read input from STDIN. Print output to STDOUT
f, l = '', ''
while True:
    f = raw_input("")
    l = raw_input("")
    if len(f)<=10 and len(l)<=10:
        break
        
print 'Hello %s %s! You just delved into python.' %(f, l)
