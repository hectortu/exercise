import sys
ans=sys.stdin.readline().strip()
n=int(sys.stdin.readline().strip())
for _ in range(n):
    g=sys.stdin.readline().strip()
    a=0
    b=0
    for i in range(4):
        for j in range(4):
            if ans[i]==g[j]:
                if i==j:
                    a+=1
                else:
                    b+=1
    print(str(a)+'A'+str(b)+'B')
