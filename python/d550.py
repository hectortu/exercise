import sys
for s in sys.stdin:
    [n,m]=[int(i) for i in s.split()]
    l=list()
    for i in range(n):
        s=[int(i) for i in sys.stdin.readline().split()]
        l.append(s)
    for i in range(m-1,-1,-1):
        l.sort(key=lambda x:x[i])
    for i in range(n):
        print(' '.join([str(j) for j in l[i]]))
