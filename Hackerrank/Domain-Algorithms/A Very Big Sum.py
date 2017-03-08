# python3
# link: https://www.hackerrank.com/challenges/a-very-big-sum

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
s = 0
for i in arr:
    s += i
print(s)
