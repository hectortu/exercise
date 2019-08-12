#include <iostream>
using namespace std;

int main(){
  long long int a,b,t;
  while(cin >> a >> b){
    while(b>0){
      t=a%b;
      a=b;
      b=t;
    }
    cout << a << endl;
  }
  return 0;
}
