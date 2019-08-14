#include <cstdio>
#include <cstring>
using namespace std;

int main(){
  int n,i,g,gn,x,y;
  int p[100001];

  while((scanf("%d",&n))!=EOF){
    memset(p,0,400004);
    while(n--){
      scanf("%d%d",&g,&gn);
      for(i=0;i<gn;++i){
        scanf("%d",&x);
        p[x]=g;
      }
    }
    scanf("%d",&y);
    printf("%d\n",p[y]);
  }
  return 0;
}


