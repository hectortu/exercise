#include <iostream>
using namespace std;

int main(){
	int n,score;
	int grade[]={40,20,10};
	while(cin >> n){
		score=0;
		if(n>grade[0])
			score=100;
		else if(n>grade[1])
			score=n-grade[1]+80;
		else if(n>grade[2])
			score=2*(n-grade[2])+60;
		else
			score=6*n;
		cout << score << endl;
	}
	return 0;
}
