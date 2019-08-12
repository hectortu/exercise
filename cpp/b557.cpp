#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int a[101];
  int t,n,i,j,k,l,sum;

  cin >> t;
  while(t--){
    cin >> n;
    memset(a,0,400);
    for(i=0;i<n;++i)
      cin >> a[i];
    sum=0;
    for(i=0;i<n;++i){
      for(j=0;j<n;++j){
        for(k=0;k<n;++k){
            sum+=(a[i]*a[i]==a[j]*a[j]+a[k]*a[k]);
        }
      }
    }
    cout << (sum/2) << endl;
  }
  return 0;
}
