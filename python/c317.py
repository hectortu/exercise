import sys
n=int(sys.stdin.readline().strip())
for _ in range(n):
    [x,a,b]=[int(i) for i in sys.stdin.readline().strip().split()]
    coins=x//a
    for i in range(coins,-1,-1):
        if (x-i*a)%b==0:
            print(i+(x-i*a)//b)
            break
    else:
        print(-1)
