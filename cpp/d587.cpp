#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(){
  int n,t;
  priority_queue<int,vector<int>,greater<int>>p;
  while((scanf("%d",&n))!=EOF){
    while(n--){
      scanf("%d",&t);
      p.push(t);
    }
    while(!p.empty()){
      cout << p.top() << ' ';
      p.pop();
    }
  }
  return 0;
}
