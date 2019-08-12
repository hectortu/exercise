#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
	string input;
	stringstream ss;
	int n,sum;
	char c;
	vector<int>num;
	vector<char>op;
	getline(cin,input);
	while(!input.empty()){
		ss.str("");
		ss.clear();
		num.clear();
		op.clear();
		ss << input;
		ss >> n;
		if(n>=0)
			num.push_back(n);
		else
			num.push_back(-n);
		op.push_back('+');
		ss >> c >> n;
		while(!ss.fail()){
			if(c=='-'){
				num.push_back(-n);
				op.push_back('+');
			} else {
				num.push_back(n);
				op.push_back(c);
				}
			ss >> c >> n;
		}
		for(int i=0;i<op.size();++i){
			if(op[i]=='*')
				num[i-1]*=num[i];
			else if(op[i]=='/')
				num[i-1]/=num[i];
			else if(op[i]=='%')
				num[i-1]%=num[i];
			if(op[i]=='*' || op[i]=='/' || op[i]=='%')
				num[i]=0;
		}
		sum=0;
		for(int i=0;i<num.size();++i)
			sum+=num[i];
		cout << sum << endl;
		getline(cin,input);
	}
	return 0;
}
