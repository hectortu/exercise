#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string input;
  string s1,s2;
  getline(cin,input);
  while(!input.empty()){
    s1=input.substr(0,input.length()/2);
    if(input.length()%2==1)
      s2=input.substr(input.length()/2+1);
    else
      s2=input.substr(input.length()/2);
    reverse(s2.begin(),s2.end());
    cout << ((s1.compare(s2)==0)?"yes":"no") << endl;
    getline(cin,input);
  }
  return 0;
}
