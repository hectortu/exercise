import sys
status={"Get_Kill":1,"Get_Assist":100,"Die":0};
for s in sys.stdin:
    score=list()
    for i in range(int(s)):
        tmp=input()
        score.append(status[tmp])
    for i in score:
        print(i,end=' ')
