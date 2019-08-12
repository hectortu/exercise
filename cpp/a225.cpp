#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool cmp1(int a,int b){
  if(a%10==b%10)
    return a/10>b/10;
  else
    return a%10<b%10;
}

int main() {
  int n;
  int d[1001];
  while(cin >> n){
    memset(d,0,1001*4);
    for(int i=0;i<n;++i)
      cin >> d[i];
    sort(d,d+n,cmp1);
    for(int i=0;i<n;++i)
      cout << d[i] << ' ';
    cout << endl;
  }
  return 0;
}
