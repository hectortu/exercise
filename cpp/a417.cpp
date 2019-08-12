#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int r[][2]={{0,1},{1,0},{0,-1},{-1,0}};
  int l[][2]={{1,0},{0,1},{-1,0},{0,-1}};
  int t,n,m,i,j,k,cnt,x,y,d;
  int **mat;
  
  cin >> t;
  while(t--){
    cin >> n >> m;
    mat=new int*[n];
    for(i=0;i<n;++i)
      mat[i]=new int[n];
    cnt=1;
    x=0;
    y=0;
    d=0;
    if(m==1){
      for(i=0;i<n;++i){
	mat[x][y]=cnt;
	++cnt;
	if(i<n-1){
	  x+=r[d][0];
	  y+=r[d][1];
	}
      }
      for(i=n-1;i>0;--i){
	for(k=0;k<2;++k){
	  ++d;
	  d%=4;
	  for(j=0;j<i;++j){
	    x+=r[d][0];
	    y+=r[d][1];
	    mat[x][y]=cnt;
	    cnt++;
	  }
	}
      }
    }
    if(m==2){
      for(i=0;i<n;++i){
	mat[x][y]=cnt;
	++cnt;
	if(i<n-1){
	  x+=l[d][0];
	  y+=l[d][1];
	}
      }
      for(i=n-1;i>0;--i){
	for(k=0;k<2;++k){
	  ++d;
	  d%=4;
	  for(j=0;j<i;++j){
	    x+=l[d][0];
	    y+=l[d][1];
	    mat[x][y]=cnt;
	    cnt++;
	  }
	}
      }
    }
    for(i=0;i<n;++i)
      for(j=0;j<n;++j)
	printf("%5d%s",mat[i][j],(j==n-1)?"\n":"");
    for(i=0;i<n;++i)
      delete [] mat[i];
    delete [] mat;
  }
  return 0;
}
