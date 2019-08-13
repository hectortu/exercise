#include <cstdio>
using namespace std;

bool bsearch(int d[],int x,int l,int r){
  int m;
  while(l<r){
    m=(l+r)/2;
    if(x<=d[m])
      r=m;
    else
      l=m+1;
  }
  if(d[l]==x)
    return true;
  else
    return false;
}

int main(){
  int n,x,i,cnt;
  int a[100000];
  int b[100000];

  while((scanf("%d",&n))!=EOF){
    scanf("%d",&x);
    a[0]=x;
    b[0]=x;
    for(i=1;i<n;++i){
      scanf("%d",&x);
      a[i]=x;
      b[i]=b[i-1]+x;
    }
    cnt=0;
    x=0;
    for(i=n-1;i>=0;--i){
      x+=a[i];
      if(bsearch(b,x,0,n-1))
        cnt+=1;
    }
    printf("%d\n",cnt);
  }
  return 0;
}
