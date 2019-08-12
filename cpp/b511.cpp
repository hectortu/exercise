#include <iostream>
#include <cstring>
using namespace std;

int co[5],cn[5];
int n;

void change(int chg,int idx){
  if(chg==0){
    cout << '(';
    for(int i=0;i<n;++i)
      cout << cn[i] << ((i==n-1)?")\n":",");
    return;
  }
  if(idx>=n) return;
  for(int t=0;t<=chg/co[idx];++t){
    cn[idx]=t;
    change(chg-t*co[idx],idx+1);
  }
}

int main(){
  int chg;
  while(cin >> n){
    for(int i=0;i<n;++i)
      cin >> co[i];
    memset(cn,0,20);
    cin >> chg;
    change(chg,0);
  }
  return 0;
}
