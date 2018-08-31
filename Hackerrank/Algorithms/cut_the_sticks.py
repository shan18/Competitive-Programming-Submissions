# python3
# link: https://www.hackerrank.com/challenges/cut-the-sticks

def change(arr):
    l = [];
    for i in arr[:]:
        if i!=0:
            l.append(i)
    return l

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
while len(arr)>0:
    print(len(arr))
    m = min(arr)
    arr = [(x-m) for x in arr[:]]
    arr = change(arr)
