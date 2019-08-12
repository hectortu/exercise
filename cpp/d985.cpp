#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
  int n,m,i,min,sec,track,best,sum;
  int t[100];

  scanf("%d",&n);
  track=1;
  while(track<=n){
    memset(t,0,400);
    scanf("%d",&m);
    for(i=1;i<=m;++i){
      scanf("%d%d",&min,&sec);
      t[i]=min*60+sec;
    }
    best=1;
    sum=t[1];
    for(i=2;i<=m;++i){
      sum+=t[i];
      if(t[i]<t[best])
        best=i;
    }
    sum/=m;
    printf("Track %d:\n",track);
    printf("Best Lap: %d minute(s) %d second(s).\n",t[best]/60,t[best]%60);
    printf("Average: %d minute(s) %d second(s).\n",sum/60,sum%60);
    printf("\n");
    ++track;
  }
  return 0;
}
