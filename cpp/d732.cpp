#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int a[100000];

int bsearch(int x,int l,int r){
  int m;
  while(l<r){
    m=(l+r)/2;
    if(x<=a[m])
      r=m;
    else if(x>a[m])
      l=m+1;
  }
  if(a[l]==x)
    return l;
  else
    return 0;
}

int main(){
  int n,k,x;
  while(scanf("%d%d",&n,&k)!=EOF){
    memset(a,0,400000);
    for(int i=1;i<=n;++i)
      scanf("%d",&a[i]);
    for(int i=0;i<k;++i){
      scanf("%d",&x);
      printf("%d\n",bsearch(x,1,n));
    }
  }
  return 0;
}
