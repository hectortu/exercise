import sys
for s in sys.stdin:
    [a,b]=[int(i) for i in s.split()]
    if a==0 and b==0:
        break
    print(a**b)
