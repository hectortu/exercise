import sys
for s in sys.stdin:
  s=s.rstrip('\n')
  s+='000'
  s=[i for i in s]
  if s[s.index('.')+3]>='5':
    if s[s.index('.')+2]<'9':
      s[s.index('.')+2]=chr(1+ord(s[s.index('.')+2]))
    else:
      i=0
      while s[s.index('.')+2-i] in '9.':
        if s[s.index('.')+2-i]!='.':
          s[s.index('.')+2-i]='0'
        i+=1
      s[s.index('.')+2-i]=chr(1+ord(s[s.index('.')+2-i]))
  if all([i in "-0." for i in s[:s.index('.')+3]]):
    print("0.00")
  else:
    print(''.join(s[:s.index('.')+3]))

