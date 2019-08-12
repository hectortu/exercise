import sys
for s in sys.stdin:
    s=[i for i in s.split()]
    op1=int(s[0],2)
    print(format(op1,'05b'),end='')
    for i in range(1,len(s),2):
        op2=int(s[i+1],2)
        if s[i]=='and':
            op1&=op2
            print('&&'+format(op2,'05b'),end='')
        elif s[i]=='or':
            op1|=op2
            print('||'+format(op2,'05b'),end='')
    print(' = '+format(op1,'05b'))

