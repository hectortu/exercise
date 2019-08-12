#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  unsigned int a,b;
  int cnt;
  while(scanf("%u",&a)!=EOF){
    if(a==0)
      break;
    b=a^(a+1);
    cnt=0;
    while(b>0){
      if(b&1)
	cnt++;
      b>>=1;
    }
    printf("%d\n",cnt-1);
  }
  return 0;
}
    
