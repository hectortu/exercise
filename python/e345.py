import sys
for s in sys.stdin:
    while True:
        s=[int(i) for i in s.rstrip('\n')]
        s=sum(s)
        if s<10:
            break
        s=str(s)
    print(s)
