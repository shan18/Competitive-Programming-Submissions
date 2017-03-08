# python3
# link: https://www.hackerrank.com/challenges/diagonal-difference

n = int(input().strip())
a = []
for a_i in range(n):
   a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
   a.append(a_t)
ls, rs = 0, 0
for i in range(n):
    for j in range(n):
        if i==j:
            ls += a[i][j]
        if i+j+1 == n:
            rs += a[i][j]
            
print(abs(ls-rs))
