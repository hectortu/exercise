#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int n,m,i,j;
  int x1,y1,x2,y2;
  char mat[500][500];

  while(cin >> n >> m){

    memset(mat,' ',500*500);

    cin >> x1 >> y1;

    while(--m){
      cin >> x2 >> y2;
      if(x1==x2){
	if(y1>y2)
	  for(i=y2-1;i<y1;++i)
	    mat[x1-1][i]='*';
	else
	  for(i=y1-1;i<y2;++i)
	    mat[x1-1][i]='*';
      }
      if(y1==y2){
	if(x1>x2)
	  for(i=x2-1;i<x1;++i)
	    mat[i][y1-1]='*';
	else
	  for(i=x1-1;i<x2;++i)
	    mat[i][y1-1]='*';
      }
      x1=x2;
      y1=y2;
    }
    for(i=0;i<n+2;++i)
      cout << '-';
    cout << endl;
    
    for(i=0;i<n;++i){
      cout << '|';
      for(j=0;j<n;++j)
	cout << mat[i][j];
      cout << '|' << endl;
    }

    for(i=0;i<n+2;++i)
      cout << '-';
    cout << endl;
  }
  return 0;
}
