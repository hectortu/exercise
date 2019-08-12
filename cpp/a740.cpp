#include <iostream>
#include <vector>
using namespace std;

vector<int>prime;

void getprime(int n){
  bool isPrime;
  int i,j;
  prime.push_back(2);
  for(i=3;i<n;++i){
    isPrime=true;
    for(j=0;j<prime.size();++j)
      if(i%prime[j]==0){
        isPrime=false;
        break;
      }
      else if(i<prime[j]*prime[j])
        break;
    if(isPrime)
      prime.push_back(i);
  }
}

int main(){
  int n,i,sum;
  getprime(150000);
  while(cin >> n){
    sum=0;
    i=0;
    while(n!=prime[i]){
      if(n%prime[i]==0){
        sum+=prime[i];
        n/=prime[i];
      }
      else
        ++i;
    }
    sum+=prime[i];
    cout << sum << endl;
  }
  return 0;
}


