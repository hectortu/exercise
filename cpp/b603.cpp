#include <iostream>
using namespace std;

int gcd(int a,int b){
  int t;
  while(b>0){
    t=a%b;
    a=b;
    b=t;
  }
  return a;
}

int main(){
  int x1,y1,x2,y2,u,d,g;
  while(cin>>x1>>y1>>x2>>y2){
    u=y2-y1;
    d=x1*x1+x2*x2-2*x1*x2;
    g=gcd(u,d);
    u/=g;
    d/=g;
    cout <<d<<"y = "<<u<<"x^2 + "<<(-2*u*x1)<<"x + "<<(u*x1*x1+d*y1)<<endl;
  }
  return 0;
}
