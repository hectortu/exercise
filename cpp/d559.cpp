#include <cstdio>
using namespace std;

int main(){
  int n;
  while((scanf("%d",&n))!=EOF)
    printf("\'C\' can printf(\"%%d\",n); to show integer like %d\n",n);
  return 0;
}
