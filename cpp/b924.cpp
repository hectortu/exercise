#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
  int n,m,a,b,odd;
  int node[10000];
  while(scanf("%d%d",&n,&m)!=EOF){
    memset(node,0,40000);
    for(int i=0;i<m;++i){
      scanf("%d%d",&a,&b);
      node[a]++;
      node[b]++;
    }
    odd=0;
    for(int i=1;i<=n;++i)
      if(node[i]%2==1)
        odd++;
    if(odd==0 || odd==2)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}


