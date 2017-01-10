# Python3

test = int(input())
for t in range(test):
    c, d, l = [int(x) for x in input().split()]
    
    f = False
    if l==0:
        if c==0 and d==0:
            f = True
    elif l%4 == 0 and (c!=0 or d!=0):
        dog_leg = d*4
        cat_leg = c*4
        if (d==0 and cat_leg==l) or (c==0 and dog_leg==l):
            f = True
        elif dog_leg+cat_leg == l:
            f = True
        elif dog_leg+cat_leg > l:
            if dog_leg == l and d*2 >= c:
                f = True
            elif dog_leg < l:
                l -= dog_leg;
                cat_leg_on_dog = cat_leg - l;
                cat = int(cat_leg_on_dog/4)
                if d*2 >= cat:
                    f = True
    
    print('yes' if f else 'no')
