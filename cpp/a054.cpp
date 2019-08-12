#include <iostream>
#include <string>
using namespace std;

int main(){
	string elist="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int numcode[]={1,0,9,8,7,6,5,4,9,3,2,2,1,
							0,8,9,8,7,6,5,4,3,1,3,2,0};
	string input;
	int sum,check;
	getline(cin,input);
	while(!input.empty()){
		sum=0;
		for(int i=0;i<8;++i)
			sum+=(input[i]-'0')*(8-i);
		check=input[8]-'0';
		for(int i=0;i<26;++i){
			if((numcode[i]+sum)%10==0 && check==0
			|| 10-((numcode[i]+sum)%10)==check)
				cout << elist[i];
		}
		cout << endl;
		getline(cin,input);
	}
	return 0;
}
