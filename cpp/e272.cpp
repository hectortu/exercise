#include <cstdio>
using namespace std;

long long int gcd(long long int a, long long int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

long long int fib(long long int k){
  long long int a,b,t;
  long long int term=1;
  a=1;
  b=1;
  while(k>term++){
    t=a+b;
    a=b;
    b=t;
  }
  return a;
}

int main(){
  long long int m,n,k;
  while(scanf("%lld%lld",&m,&n)!=EOF){
    k=gcd(m,n);
    printf("%lld\n",fib(k));
  }

  return 0;
}

