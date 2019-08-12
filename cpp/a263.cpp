#include <iostream>
using namespace std;

int days(int y,int m,int d){
  int t;
  int mday[]={31,28,31,30,31,30,31,31,30,31,30,31};
  t=365*(y-1)+(y-1)/4-(y-1)/100+(y-1)/400+d;
  for(int i=0;i<m-1;++i)
    t+=mday[i];
  if(m>2 && y%4==0 && y%100!=0 || y%400==0)
    t++;
  return t;
}

int main(){
  int y1,y2,m1,m2,d1,d2;
  while(cin >> y1 >> m1 >> d1){
    cin >> y2 >> m2 >> d2;
    cout << abs(days(y1,m1,d1)-days(y2,m2,d2)) << endl;
  }
  return 0;
}
