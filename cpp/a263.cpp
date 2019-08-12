#include <iostream>
using namespace std;

int main(){
  int y1,m1,d1,y2,m2,d2;
  int t,days;
  int mdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
  bool leap;

  while(cin >> y1 >> m1 >> d1){
    cin >> y2 >> m2 >> d2;

    if(y1>y2){
      t=y1;y1=y2;y2=t;t=m1;m1=m2;m2=t;t=d1;d1=d2;d2=t;
    }
    else if(y1==y2 && m1>m2){
      t=m1;m1=m2;m2=t;t=d1;d1=d2;d2=t;
    }
    else if(y1==y2 && m1==m2 && d1>d2){
      t=d1;d1=d2;d2=t;
    }

    days=0;
    if(y1==y2 && m1==m2)
      days=d2-d1;
    else if(y1==y2){
      leap=y1%4==0 && y1%100!=0 || y1%400==0;
      days=mdays[m1-1]-d1;
      if(m1==2 && leap)
	days++;
      for(int i=m1+1;i<m2;++i){
	days+=mdays[i-1];
	if(i==2 && leap)
	  days++;
      }
      days+=d2;
    }
    else {
      leap=y1%4==0 && y1%100!=0 || y1%400==0;
      days=mdays[m1-1]-d1;
      if(m1==2 && leap)
	days++;
      for(int i=m1+1;i<=12;++i){
	days+=mdays[i-1];
	if(i==2 && leap)
	  days++;
      }
      for(int i=y1+1;i<y2;++i){
	leap=i%4==0 && i%100!=0 || i%400==0;
	if(leap)
	  days+=366;
	else
	  days+=365;
      }
      leap=y2%4==0 && y2%100!=0 || y2%400==0;
      for(int i=1;i<m2;++i){
	days+=mdays[i-1];
	if(i==2 && leap)
	  days++;
      }
      days+=d2;
    }
    cout << days << endl;
  }
  return 0;
}
