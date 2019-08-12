#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int h,m,t;
  while(cin >> h >> m){
    t=(60*h+m+150)%(60*24);
    h=t/60;
    m=t-60*h;
    printf("%02d:%02d\n",h,m);
  }
  return 0;
}
