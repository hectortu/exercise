#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
  int a,b,t;
  string input;
  stringstream ss;
  getline(cin,input);
  while(!input.empty()){
    ss.str("");
    ss.clear();
    ss << input;
    ss >> a >> b;
    while(b>0){
      t=a%b;
      a=b;
      b=t;
    }
    cout << a << endl;
    getline(cin,input);
  }
  return 0;
}
