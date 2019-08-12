#include <iostream>
using namespace std;

int main(){
  int c,w,p;
  while(cin >> c >> w){
    p=0;
    while(c+w>=13){
      if(c>=12){
        c-=11;
        ++p;
      }
      else{
        ++c;
        --w;
      }
    }
    cout << p << endl;
  }
  return 0;
}
