import sys
for s in sys.stdin:
  s=[int(i) for i in s.rstrip('\n')]
  if sum(s)%3==0:
      print('YES')
  else:
      print('NO')
