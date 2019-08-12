#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
  unsigned long long int a;
  string input,s;
  stringstream ss;

  getline(cin,input);
  while(!input.empty()){
    s.clear();
    ss.str("");
    ss.clear();
    ss << input;
    ss >> a;
    while(a>0){
      s.push_back((a&1)+'0');
      a>>=1;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    getline(cin,input);
  }
  return 0;
}
