#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n && n!=0){
    for(int i=1;i<=n;++i){
      for(int j=1;j<=n-i;++j)
        cout << '_';
      for(int j=1;j<=i;++j)
        cout << '+';
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
