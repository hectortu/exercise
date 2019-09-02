import sys
n=int(sys.stdin.readline().strip())
p=list()
for _ in range(n):
    t=[int(i) for i in sys.stdin.readline().strip().split()]
    p.append(t)
ml=0
for i in range(n-1):
    for j in range(i+1,n):
        t=(p[i][0]-p[j][0])**2+(p[i][1]-p[j][1])**2
        if t>ml:
            mi,mj=i,j
            ml=t
print(mi,mj)
