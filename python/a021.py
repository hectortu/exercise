s=""
while True:
    s=input()
    if s=="":
        break
    s=s.replace('/','//')
    print(eval(s))

