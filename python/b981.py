import sys
for s in sys.stdin:
  s=s.replace("hour","*3600000")
  s=s.replace("min","*60000")
  s=s.replace("ms","")
  s=s.replace("h","*3600000+")
  s=s.replace("m","*60000+")
  s=s.replace("s","*1000")
  if s[-2]=='+':
    s=s[:-2]
  print(s)
#  print(int(eval(s)))
