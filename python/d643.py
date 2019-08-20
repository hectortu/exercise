import sys
s=sys.stdin.readline().rstrip('\n')
l=len(s)
sep=list(filter(lambda x:l%x==0,list(range(1,l//2+1))))
for i in sep:
    sl=list()
    for j in range(0,l,i):
        sl.append(s[j:j+i])
    tmp=''.join(sl)
    sl.sort()
    sl=''.join(sl)
    cnt=0
    if tmp!=sl:
        print(sl)
        cnt+=1
if cnt==0:
    print('bomb!')
