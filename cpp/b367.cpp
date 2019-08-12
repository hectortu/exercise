#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int t,n,m,i,j,tmp;
  int a[12][12],b[12][12];
  bool go;
  cin >> t;
  while(t--){
    cin >> n >> m;
    memset(a,0,12*12*4);
    memset(b,0,12*12*4);
    go=true;
    for(i=0;i<n;++i)
      for(j=0;j<m;++j){
	cin >> a[i][j];
	b[i][j]=a[i][j];
      }
    for(i=0;i<n/2;++i)
      for(j=0;j<m;++j){
	tmp=a[i][j];
	a[i][j]=a[n-i-1][j];
	a[n-i-1][j]=tmp;
      }
    for(i=0;i<n;++i)
      for(j=0;j<m/2;++j){
	tmp=a[i][j];
	a[i][j]=a[i][m-j-1];
	a[i][m-j-1]=tmp;
      }
    for(i=0;i<n;++i){
      for(j=0;j<m;++j)
	if(a[i][j]!=b[i][j]){
	  go=false;
	  break;
	}
    }
    if(go)
      cout << "go forward" << endl;
    else
      cout << "keep defending" << endl;
  }
  return 0;
}
    
      
