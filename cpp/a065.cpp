#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
  int n,sum,sc,i;
  while(cin>>n){
    sum=0;
    for(i=0;i<n;++i){
      cin >> sc;
      sum+=sc;
    }
    if(sum>59*i)
      cout << "no" << endl;
    else
      cout << "yes" << endl;
  }
  return 0;
}
