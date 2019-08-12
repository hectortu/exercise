#include <iostream>
#include <stack>
using namespace std;

int main(){
  int n,act,tmp;
  stack<int>stk;

  while(cin >> n)
    while(n--){
      cin >> act;
      if(act==3){
        cin >> tmp;
        stk.push(tmp);
      }
      else if(act==2)
        cout << stk.top() << endl;
      else if(act==1)
        stk.pop();
    }
  return 0;
}
