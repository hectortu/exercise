#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string s;
  int n,x;
  cin >> n >> x;
  for(int i=1;i<=n;++i)
    s+=to_string(i);
  cout << count(s.begin(),s.end(),x+'0') << endl;
  return 0;
}
