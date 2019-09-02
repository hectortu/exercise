import sys
[n,t]=[int(i) for i in sys.stdin.readline().strip().split()]
r=list()
for _ in range(n):
    [s,d]=[int(i) for i in sys.stdin.readline().strip().split()]
    while s>0:
        r.append(s)
        s-=d
r.sort(reverse=True)
print(sum(r[:t]))
