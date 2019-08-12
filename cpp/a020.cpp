#include <iostream>
#include <string>
using namespace std;
const string ideng("ABCDEFGHJKLMNPQRSTUVXYWZIO");
const string idnum[]={"10","11","12","13","14","15","16","17","18",
	       "19","20","21","22","23","24","25","26","27",
	       "28","29","30","31","32","33","34","35"};
int main(){
  string s;
  int sum;
  getline(cin,s);
  while(!s.empty()){
    s=idnum[ideng.find(s[0])]+s.substr(1);    
    sum=s[0]+s[10]-2*'0';
    for(int i=1;i<10;++i)
      sum+=(s[i]-'0')*(10-i);
    cout << ((sum%10==0)?"real":"fake") << endl;
    getline(cin,s);
  }
  return 0;
}
