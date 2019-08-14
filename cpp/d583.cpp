#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
  int n,i;
  int d[100001];

  while((scanf("%d",&n))!=EOF){
    memset(d,0,400004);
    for(i=0;i<n;++i)
      scanf("%d",&d[i]);
    sort(d,d+n);
    for(i=0;i<n;++i)
      printf("%d ",d[i]);
    printf("\n");
  }
  return 0;
}
