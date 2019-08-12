#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int a,b,n,cnt,t;
  vector<int>prime;
  prime.clear();
  n=2;
  prime.push_back(n);
  while(n<=20000){
    ++n;
    for(int i=0;i<prime.size();++i)
      if(n%prime[i]==0)
	break;
      else if(prime[i]>sqrt(n)){
	prime.push_back(n);
	break;
      }
  }
  while(cin >> a >> b){
    if(a>b){
      t=a; a=b; b=t;
    }
    cnt=0;
    for(int i=a;i<=b;++i)
      for(int j:prime)
	if(i==1 || i%j==0 && i!=2)
	  break;
	else if(j*j>i){
	  cnt++;
	  break;
	}
    cout << cnt << endl;
  }
  return 0;
}
