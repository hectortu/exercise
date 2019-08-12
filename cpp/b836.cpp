#include <iostream>
using namespace std;

int main(){
  long long int n,m,t,s;
  while(cin >> n >> m){
    t=1;
    s=0;
    while(s<n){
      s+=t;
      t+=m;
    }
    if(s==n)
      cout << "Go Kevin!!" << endl;
    else
      cout << "No Stop!!" << endl;
  }
  return 0;
}
