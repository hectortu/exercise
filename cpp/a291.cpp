#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int c[4],p[4],cc[4],cp[4];
  int i,j,n,sum;
  while(cin>>c[0]>>c[1]>>c[2]>>c[3]){
    cin >> n;
    while(n--){
      memset(cc,0,4*4);
      memset(cp,0,4*4);
      cin>>p[0]>>p[1]>>p[2]>>p[3];
      for(i=0;i<4;++i)
        if(c[i]==p[i]){
          cc[i]=10;
          cp[i]=10;
        }
      for(i=0;i<4;++i)
        for(j=0;j<4;++j)
          if(cc[i]==0 && cp[j]==0 && c[i]==p[j]){
            cc[i]=1;
            cp[j]=1;
            break;
          }
      sum=0;
      for(i=0;i<4;++i)
        sum+=cc[i];
      cout << (sum/10) << 'A' << (sum%10) << 'B' << endl;
    }
  }
  return 0;
}
