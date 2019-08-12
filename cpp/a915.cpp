#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _data{
  int x;
  int y;
} Data;

Data N[1000];

bool cmp1(Data a, Data b){
  if(a.x==b.x)
    return a.y < b.y;
  else
    return a.x < b.x;
}

int main(){
  int n,i;

  while(cin >> n){
    for(i=0;i<n;++i)
      cin >> N[i].x >> N[i].y;
    sort(N,N+n,cmp1);
    for(i=0;i<n;++i)
      cout << N[i].x << ' ' << N[i].y << endl;
  }
  return 0;
}
