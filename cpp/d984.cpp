#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
  long long int p[3]={0};
  int fst,snd,thd;
  while(scanf("%lld%lld%lld",&p[0],&p[1],&p[2])!=EOF){
    if(p[0]>p[1]){
      if(p[1]>p[2]){
        fst=0; snd=1; thd=2;
      }
      else if(p[0]>p[2]){
        fst=0; snd=2; thd=1;
      }
      else if(p[0]<p[2]){
        fst=2; snd=0; thd=1;
      }
    }else{
      if(p[0]>p[2]){
        fst=1; snd=0; thd=2;
      }
      else if(p[1]>p[2]){
        fst=1; snd=2; thd=0;
      }
      else if(p[1]<p[2]){
        fst=2; snd=1; thd=0;
      }
    }
    if(p[fst]>p[snd]+p[thd])
      printf("%c\n",fst+'A');
    else
      printf("%c\n",snd+'A');
  }
  return 0;
}
