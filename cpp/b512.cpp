#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
  int idx,num,n,i,sum;
  char sep;
  int d[50000][3];
  vector<int>changed;

  memset(d,0,50000*3*4);
  n=0;
  do{
    cin >> idx >> sep >> num;
    d[n][0]=idx;
    d[n][1]=num;
    ++n;
  }while(idx!=0 || num!=0);
  --n;
  do{
    cin >> idx >> sep >> num;
    for(i=0;i<n;++i)
      if(idx==d[i][0]){
        d[i][1]*=num;
        d[i][2]=1;
        break;
      }
  }while(idx!=0 || num!=0);
  sum=0;
  for(i=0;i<n;++i)
    if(d[i][2]==1)
      sum+=d[i][1];
  cout << sum << endl;
  return 0;
}
