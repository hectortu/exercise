import sys
for l in sys.stdin:
    l=[int(i) for i in l.rstrip('\n').split()]
    del l[0]
    cnt=0
    l_r=list()
    r_l=list()
    s=sum(l)
    l_r.append(l[0])
    r_l.append(s)
    r_l.append(s-l[0])
    for i in range(1,len(l)):
        x=l_r[i-1]+l[i]
        l_r.append(x)
        r_l.append(s-x)
    r_l.pop()
    for i in l_r:
        if i in r_l:
            cnt+=1
    print(cnt)
