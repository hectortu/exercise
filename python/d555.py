import sys
for s in sys.stdin:
    n=int(s)
    l=list()
    for _ in range(n):
        tmp=[int(i) for i in sys.stdin.readline().split()]
        l.append(tmp)
    l.sort(key=lambda x:-x[0])
    l.sort(key=lambda x:-x[1])
    print(l)
