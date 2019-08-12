#include <iostream>
using namespace std;

int main(){
  int c[4][2];
  int g[4][2];
  int n,sum,i,j;

  while(cin >> c[0][0] >> c[1][0] >> c[2][0] >> c[3][0]){
    cin >> n;
    while(n--){
      for(i=0;i<4;++i)
	c[i][1]=0;
      for(i=0;i<4;++i){
	cin >> g[i][0];
	if(g[i][0]==c[i][0]){
	  g[i][1]=10;
	  c[i][1]=1;
	}
	else
	  g[i][1]=0;
      }
      for(i=0;i<4;++i){
	for(j=0;j<4;++j)
	  if(c[j][1]!=1 && g[i][1]!=10 && g[i][0]==c[j][0]){
	    g[i][1]=1;
	    c[j][1]=1;
	  }
      }
      sum=0;
      for(i=0;i<4;++i)
	sum+=g[i][1];
      cout << (sum/10) << 'A' << (sum%10) << 'B' << endl;
    }
  }
  return 0;
}
