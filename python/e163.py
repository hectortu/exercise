import sys
code="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
[n,m]=[int(i) for i in sys.stdin.readline().split()]
for i in range(n):
    m=[c for c in sys.stdin.readline().rstrip('\n')]
    for c in m:
        print(format(code.find(c),'06b'),end='')
    print()
