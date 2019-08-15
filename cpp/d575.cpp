#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  long long int x1,y1,x2,y2,d;
  while((scanf("%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&d))!=EOF){
    if(abs(x1-x2)+abs(y1-y2)>d)
      printf("alive\n");
    else
      printf("die\n");
  }
  return 0;
}
