#include <iostream>
using namespace std;

int main(){
  long long int n,cnt;
  while(cin >> n){
    cnt=0;
    while(n%5==0){
      cnt+=n/5;
      n/=5;
    }
    cout << cnt << endl;
  }
  return 0;
}
