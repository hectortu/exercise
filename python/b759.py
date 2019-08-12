import sys
for s in sys.stdin:
    for i in range(len(s)-1):
        print(s[i:-1]+s[:i])
