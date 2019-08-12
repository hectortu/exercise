#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  int n,side;
  while((cin >> n) && n!=0){
    side=int(sqrt(n));
    if(n==side*side)
      if(side%2==0)
        printf("%d %d\n",side,1);
      else
        printf("%d %d\n",1,side);
    else if(n-side*side<=side+1)
      if(side%2==0)
        printf("%d %d\n",side+1,n-side*side);
      else
        printf("%d %d\n",n-side*side,side+1);
    else
      if(side%2==0)
        printf("%d %d\n",side-(n-side*side-(side+1))+1,side+1);
      else
        printf("%d %d\n",side+1,side-(n-side*side-(side+1))+1);
  }
  return 0;
}
