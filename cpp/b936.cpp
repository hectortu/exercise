#include <iostream>
#include <cstdio>
using namespace std;

long long int n,m;

long long int cnt(long long int x){
  if(x/2<m)
    return 1;
  else
    if(x%2==0)
      return 2*cnt(x/2);
    else if(x%2==1)
      return cnt((x-1)/2)+cnt((x+1)/2);
}

int main(){
  while(scanf("%lld%lld",&n,&m)!=EOF){
    if(m>n)
      printf("0\n");
    else
      printf("%lld\n",cnt(n));
  }
  return 0;
}
