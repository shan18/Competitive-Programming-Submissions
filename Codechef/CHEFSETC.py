# python3


def calc2(p):
    for j in range(len(p)-1):
        for i in range(j+1, len(p)):
            if p[j]+p[i] == 0:
                return True
    return False
 
 
def calc3(p):
    s = [p[0]+p[1]+p[2], p[0]+p[1]+p[3], p[0]+p[2]+p[3], p[1]+p[2]+p[3]]
    if 0 in s:
        return True
    return False
 
 
test = int(input())
 
for t in range(test):
    p = [int(x) for x in input().split()]
    
    if (0 in p) or sum(p)==0 or calc2(p) or calc3(p):
        print('Yes')
    #elif all(i<0 for i in p) or all(i>0 for i in p):
     #   print('No')
    else:
        print('No')
