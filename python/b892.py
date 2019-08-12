import sys
for s in sys.stdin:
  s=s.replace('gb','*8000000000')
  s=s.replace('mb','*8000000')
  s=s.replace('kb','*8000')
  if s.find('byte')>0:
    if s.find('.')>0:
      s=s.replace('.','*8+')
      s=s.replace('byte','')
    else:
      s=s.replace('byte','*8')
  s=s.replace('bit','')
  s=s.replace('g','*8000000000+')
  s=s.replace('m','*8000000+')
  s=s.replace('k','*8000')
  s=s.rstrip('+\n') 
  print(int(eval(s)))
