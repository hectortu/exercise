#include <iostream>
#include <vector>
#include <string>
using namespace std;
const string roman("IVXLCDM");
const int val[]={1,5,10,50,100,500,1000};

int rmtodec(string s){
	vector<int>t;
	int c,sum=0;
	for(string::iterator i=s.begin();i!=s.end();++i){
		c=1;
		while(i+1!=s.end() && *i==*(i+1)){
			c++;
			i++;
		}
		t.push_back(c*val[roman.find(*i)]);
	}
	for(vector<int>::iterator i=t.begin();i!=t.end();++i){
		if(i+1!=t.end() && *i<*(i+1))
			sum-=*i;
		else
			sum+=*i;
	}
	return sum;
}

string dectorm(int n){
	string s;
	for(int i=6;i>=0;--i){
		if(n/100==9){
			n-=900;
			s.push_back('C');
			s.push_back('M');
		}
		else if(n/100==4){
			n-=400;
			s.push_back('C');
			s.push_back('D');
		}
		else if(n/10==9){
			n-=90;
			s.push_back('X');
			s.push_back('C');
		}
		else if(n/10==4){
			n-=40;
			s.push_back('X');
			s.push_back('L');
		}
		else if(n==9){
			n-=9;
			s.push_back('I');
			s.push_back('X');
		}
		else if(n==4){
			n-=4;
			s.push_back('I');
			s.push_back('V');
		}
		else
			while(n>=val[i]){
				s.push_back(roman[i]);
				n-=val[i];
			}
	}
	return s;
}

int main(){
	string s;
	int a,b;
	getline(cin,s);
	while(s.compare("#")!=0){
		a=rmtodec(s.substr(0,s.find(' ')));
		b=rmtodec(s.substr(s.find(' ')+1));
		cout << ((a-b)==0?"ZERO":dectorm(abs(a-b))) << endl;
		getline(cin,s);
	}
	return 0;
}
