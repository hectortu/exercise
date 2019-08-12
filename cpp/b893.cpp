#include <iostream>
using namespace std;

long long int c[6];

long long int f(long long int x){
  long long int t;
  t=c[0];
  for(int i=1;i<6;++i)
    t=x*t+c[i];
  return t;
}

int main(){
  long long int n,p;
  bool found;
  int i;
  while(cin>>c[0]>>c[1]>>c[2]>>c[3]>>c[4]>>c[5]){
    found=false;
    p=f(-35);
    for(i=0;i<6;++i)
      if(c[i]!=0)
        break;
    if(i==6){
      cout << "Too many... = =\"" << endl;
      break;
    }
    for(i=-34;i<36;++i){
      n=f(i);
      if(n*p<0){
        cout << (i-1) << ' ' << i << endl;
        found=true;
      }
      else if(n==0){
        cout << i << ' ' << i << endl;
        found=true;
      }
      p=n;
    }
    if(!found)
      cout << "N0THING! >\\\\\\<" << endl;
  }
  return 0;
}
