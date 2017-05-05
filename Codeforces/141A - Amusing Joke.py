# python3


guest = list(input())
host = list(input())
thief = list(input())
lthief = list(thief)

for i,v in enumerate(thief):
    if v in guest:
        del(guest[guest.index(v)])
        lthief[i] = ' '
        continue
    if v in host:
        del(host[host.index(v)])
        lthief[i] = ' '

if len(guest) == 0 and len(host) == 0 and len(thief) == lthief.count(' '):
    print('YES')
else:
    print('NO')
