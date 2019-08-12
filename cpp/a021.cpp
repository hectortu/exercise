#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string add(vector<int>a,vector<int>b){
  string tmp;
  int ta,tb,ca=0;
  vector<int>::iterator ia,ib;
  ia=a.begin();
  ib=b.begin();
  while(ia!=a.end() || ib!=b.end()){
    ta=(ia==a.end())?0:*ia;
    tb=(ib==b.end())?0:*ib;
    tmp.push_back((ta+tb)%10+ca+'0');
    ca=(ta+tb)/10;
    if(ia!=a.end())
      ia++;
    if(ib!=b.end())
      ib++;
  }
  if(ca!=0)
    tmp.push_back(ca+'0');
  reverse(tmp.begin(),tmp.end());
  return tmp;
}

string sub(vector<int>a,vector<int>b){
  vector<int>::iterator ia,ib;
  int ca=0,ta,tb;
  string tmp;
  ia=a.begin();
  ib=b.begin();
  while(ia!=a.end() || ib!=b.end()){
    if(ia==a.end())
      ta=0;
    else{
      ta=*ia;
      ia++;
    }
    if(ib==b.end())
      tb=0;
    else{
      tb=*ib;
      ib++;
    }
    if((ta-ca)<tb){
      tmp.push_back(10+ta-ca-tb+'0');
      ca=1;
    }
    else
      tmp.push_back(ta-ca-tb+'0');
  }
  if(tmp.back()=='0')
    tmp.pop_back();
  reverse(tmp.begin(),tmp.end());
  return tmp;
}

string multi(vector<int>a,vector<int>b){
  vector<int>t(a.size()+b.size(),0);
  int ca=0,rm,i,j;
  string tmp("");
  for(i=0;i<b.size();++i){
    for(j=0;j<a.size();++j){
      t[i+j]+=(a[j]*b[i]+ca)%10;
      ca=(a[j]*b[i]+ca)/10;
    }
    if(ca!=0)
      t[i+j]=ca;
  }
  for(i=0;i<t.size();++i)
    if(t[i]>=10){
      t[i+1]+=t[i]/10;
      t[i]%=10;
    }
  for(int c:t)
    tmp.push_back(c+'0');
  if(tmp.back()=='0')
    tmp.pop_back();
  reverse(tmp.begin(),tmp.end());
  return tmp;
}

string divide(vector<int>a,vector<int>b){
  int i,cnt;
  vector<int>t(1,0);
  string tmp;
  bool stop=false;
  while(!stop){
    if(a.size()<b.size())
      return "0";
    for(i=0;i<b.size();++i){
      if(a[i]<b[i] && i+1<a.size() && a[i+1]>0){
	a[i]=10+a[i]-b[i];
	--a[i+1];
      }
      else if(a[i+1]==0){
	stop=true;
	break;
      }
      else
	a[i]-=b[i];
    }
    if(stop==false){
      t[t.size()-1]++;
      if(t[t.size()-1]>9){
	t[t.size()-1]=0;
	t.push_back(1);
      }
    }
  }
  for(int c:t)
    tmp.push_back(c+'0');
  reverse(tmp.begin(),tmp.end());
  return tmp;
}

int main(){
  string sa,sb,input;
  char op;
  stringstream ss;
  string::iterator si;
  vector<int>a,b;
  getline(cin,input);
  while(!input.empty()){
    ss.str("");
    ss.clear();
    ss << input;
    ss >> sa;
    ss >> op;
    ss >> sb;
    a.clear();
    b.clear();
    for(si=sa.end()-1;si>=sa.begin();--si)
      a.push_back(*si-'0');
    for(si=sb.end()-1;si>=sb.begin();--si)
      b.push_back(*si-'0');
    switch(op){
    case '+':
      cout << add(a,b);
      break;
    case '-':
      cout << sub(a,b);
      break;
    case '*':
      cout << multi(a,b);
      break;
    case '/':
      cout << divide(a,b);
      break;
    }
    cout << endl;
    getline(cin,input);
  }
  return 0;
}
