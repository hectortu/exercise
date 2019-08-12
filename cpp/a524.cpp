#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int *p;
  while(cin >> n){
    p=new int[n];
    for(int i=0;i<n;++i)
      p[i]=n-i;
    do{
      for(int i=0;i<n;++i)
	cout << p[i];
      cout << endl;
    } while(prev_permutation(p,p+n));
    delete [] p;
  }
  return 0;
}
