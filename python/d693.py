def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)

while True:
    n=int(input())
    if n==0:
        break
    d=[int(i) for i in input().split()]
    lcm=d[0]*d[1]//gcd(d[0],d[1])
    for i in range(2,len(d)):
        lcm=lcm*d[i]//gcd(lcm,d[i])
    print(lcm)
