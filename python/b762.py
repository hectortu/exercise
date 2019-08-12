import sys
status={"Get_Kill":1,"Get_Assist":100,"Die":0};

def rec(n):
  if n==1 or n==2:
    print("You have slain an enemie.")
  elif n==3:
    print("KILLING SPREE!")
  elif n==4:
    print("RAMPAGE~")
  elif n==5:
    print("UNSTOPPABLE!")
  elif n==6:
    print("DOMINATING!")
  elif n==7:
    print("GUALIKE!")
  else:
    print("LEGENDARY!")

while True:
  n=sys.stdin.readline().rstrip('\n')
  if n=="":
    break
  l=list()
  for i in range(int(n)):
    l.append(status[sys.stdin.readline().rstrip().rstrip('\t').rstrip('\n')])
  cnt=0
  die=0
  for i in range(len(l)):
    if l[i]==0:
      if cnt<3:
        print("You have been slained.")
      elif cnt>=3:
        print("SHUTDOWN.")
      cnt=0
      die+=1
    if l[i]==1:
      cnt+=1
      rec(cnt)
  cnt=0
  for i in range(len(l)):
    cnt+=l[i]
  print(str(cnt%100)+'/'+str(die)+'/'+str(cnt//100))
