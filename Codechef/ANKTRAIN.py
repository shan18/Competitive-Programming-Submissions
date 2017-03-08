# python3



test = int(input())
seat = {1:'LB', 2:'MB', 3:'UB'}
for t in range(test):
    n = int(input())
    if n%8==7:
        print(n+1, 'SU', sep='')
    elif n%8==0:
        print(n-1, 'SL', sep='')
    else:
        if n%8==1 or n%8==2 or n%8==3:
            print(n+3, seat[n%8], sep='')
        else:
            print(n-3, seat[n%8-3], sep='')
