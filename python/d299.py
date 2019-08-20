# coding: utf-8
fl=[2,3,4,6,7,8]
for f in fl:
    for r in fl:
        if r==f or r==f+1:
            continue
        for t in fl:
            if t==f or t==r or t==f+1:
                continue
            for y in fl:
                if y==f or y==r or y==t or y==f+1:
                    continue
                for x in fl:
                    if x==f or x==r or x==t or x==y or x==f+1 or f==4:
                        continue
                    if (f*10000+9000+r*100+t*10+y+2*(t*100+50))==((f+1)*10000+1000+x*100+t*10+y):
                        print(str(f)+str(9)+str(r)+str(t)+str(y)+" + "+str(t)+str(50)+" + "+str(t)+str(50)+" = "+str(f+1)+str(1)+str(x)+str(t)+str(y))
                       
