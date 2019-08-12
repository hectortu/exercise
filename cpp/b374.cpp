#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main(){
  int d[10000][2];
  int n,t,i,j,m;
  vector<int>mxnum;
  while(cin >> n){
    mxnum.clear();
    memset(d,0,10000*2*4);
    for(i=0;i<n;++i){
      cin >> t;
      for(j=0;j<=i;++j)
        if(d[j][0]==t){
          d[j][1]++;
          break;
        }
        else if(j==i){
          d[i][0]=t;
          d[i][1]++;
        }
    }

    m=d[0][1];
    for(i=1;i<n;++i)
      if(d[i][1]>m)
        m=d[i][1];
    for(i=0;i<n;++i)
      if(d[i][1]==m)
        mxnum.push_back(d[i][0]);
    sort(mxnum.begin(),mxnum.end());
    for(i=0;i<mxnum.size();++i)
      cout << mxnum[i] << ' ' << m << endl;
  }
  return 0;
}
