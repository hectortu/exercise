import sys
for s in sys.stdin:
  s=s.replace('/','//')
  print(eval(s))
