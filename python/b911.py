import sys
for s in sys.stdin:
  s=int(s)
  cnt=1
  p=1
  num=1
  while(cnt<s):
    p*=2
    cnt+=p
    num+=1
  print(num)
