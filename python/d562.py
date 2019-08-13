import sys
for n in sys.stdin:
    s=sys.stdin.readline()
    l=[i for i in s.rstrip('\n').split()]
    while len(l)>0:
        print(' '.join(l))
        del l[0]
        l=l[::-1]
