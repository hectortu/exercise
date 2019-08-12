#include <iostream>
using namespace std;
int main(){
  int n,cnt,i,j,sum;
  cin >> n;
  while(n>0){
    cnt=0;
    for(i=n/2+1;i>=1;--i)
      for(j=i,sum=0;sum<n;--j){
        sum+=j;
        if(sum==n){
          ++cnt;
          break;
        }
      }
    cout << cnt << endl;
    cin >> n;
  }
  return 0;
}

