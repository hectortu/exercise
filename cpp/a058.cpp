#include <cstdio>
using namespace std;

int main(){
  int t,a,b,i,sum,test,count;
  while(scanf("%d",&t)!=EOF){
    count=0;
    while(t--){
      scanf("%d%d",&a,&b);
      sum=0;
      i=0;
      test=0;
      while(test<=b){
	if(test>=a)
	  sum+=test;
	++i;
	test=i*i;
      }
      count++;
      printf("Case %d: %d\n",count,sum);
    }
  }
  return 0;
}
