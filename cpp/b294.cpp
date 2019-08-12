#include <iostream>
using namespace std;

int main(){
  int n,i,t;
  int sum;

  while(cin >> n){
    sum=0;
    for(i=1;i<=n;++i){
      cin >> t;
      sum+=t*i;
    }
    cout << sum << endl;
  }
  return 0;
}
