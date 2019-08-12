#include <iostream>
using namespace std;

int main(){
  int n,x,y,yee;
  cin >> n;
  while(n--){
    cin >> x >> y;
    yee=100-(x+y);
    if(yee>0 && yee<=30)
      cout << "sad!";
    else if(yee>30 && yee<=60)
      cout << "hmm~~";
    else if(yee>60 && yee<100)
      cout << "Happyyummy";
    else
      cout << "evil!!";
    cout << endl;
  }
  return 0;
}

