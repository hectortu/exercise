#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
  int n;
  string s,str;
  stringstream ss;
  ss.str("");
  ss.clear();
  getline(cin,s);
  ss << s;
  ss >> n;
  cout << n << endl;
  ss.str("");
  ss.clear();
  ss << s;
  ss >> str;
  cout << str << endl;
  return 0;
}
