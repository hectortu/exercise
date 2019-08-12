#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  double a1,b1,c1,a2,b2,c2;
  double b,ux,uy;
  while(cin>>a1>>b1>>c1>>a2>>b2>>c2){
    b=a1*b2-a2*b1;
    ux=c1*b2-c2*b1;
    uy=a1*c2-a2*c1;
    if(b==0)
      if(ux==0 && uy==0)
	cout << "Too many" << endl;
      else
	cout << "No answer" << endl;
    else{
      printf("x=%.2f\n",ux/b);
      printf("y=%.2f\n",uy/b);
    }
  }
  return 0;
}
