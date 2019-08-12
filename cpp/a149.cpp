#include <iostream>
#include <string>
using namespace std;

int main(){
  string ns,s;
  int n,product;
  getline(cin,ns);
  n=stoi(ns);
  while(n--){
    getline(cin,s);
    product=1;
    for(int i=0;i<s.size();++i)
      product*=(s[i]-'0');
    cout << product << endl;
  }
  return 0;
}
