#include <iostream>
#include <vector>
using namespace std;
vector<int>prime;

void getprime100(){
  int i,j;
  prime.push_back(2);
  i=3;
  while(i<100){
    for(j=0;j<prime.size();++j)
      if(i%prime[j]==0)
        break;
    if(j==prime.size())
      prime.push_back(i);
    ++i;
  }
}

int main(){
  int n,t,i;
  bool found;
  getprime100();
  cin >> n;
  while(n--){
    cin >> t;
    found=false;
    for(i=0;i<prime.size();++i)
      if(t%prime[i]==0){
        cout << prime[i] << " ";
        found=true;
      }
    if(!found)
      cout << "Terrible Silence...";
    cout << endl;
  }
  return 0;
}


