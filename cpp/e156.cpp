#include <cstdio>
using namespace std;

int ans,n;

bool sum(){
  return (ans+=n--) && n && sum();
}

int main(){
  while((scanf("%d",&n)!=EOF)){
    ans=0;
    sum();
    printf("%d\n",ans);
  }
  return 0;
}
