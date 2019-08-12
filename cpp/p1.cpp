#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string>v;
	string s;
	do{
		getline(cin,s);
		v.push_back(s.substr(0,s.find(' ')));
		v.push_back(s.substr(s.find(' ')+1));
	} while(!s.empty());
	v.pop_back(); v.pop_back();
	for(int i=0;i<v.size();i+=2)
		switch((stoi(v.at(i))*2+stoi(v.at(i+1)))%3){
			case 0:
				cout << "普通" << endl;
				break;
			case 1:
				cout << "吉" << endl;
				break;
			case 2:
				cout << "大吉" << endl;
				break;
		}

	return 0;
}
