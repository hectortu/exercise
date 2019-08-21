import sys
cnt=0
for s in sys.stdin:
    cnt+=1
    n=int(s)
    l=list()
    for _ in range(n):
        tmp=[int(i) for i in sys.stdin.readline().split()]
        l.append(tmp)
    l.sort(key=lambda x:-x[0])
    l.sort(key=lambda x:-x[1])
    last=l[0]
    t1=list()
    t1.append(l[0])
    for i in l[1:]:
        if last[1]!=i[1]:
            t1.append(i)
            last=i
    t2=list()
    last=t1[0]
    t2.append(t1[0])
    for i in t1[1:]:
        if (last[0]-i[0])*(last[1]-i[1])<0:
            t2.append(i)
            last=i
    print("Case %d:" % cnt)
    print("Dominate Point: %d" % len(t2))
    for i in t2:
        print("(%d,%d)" % (i[0],i[1]))
