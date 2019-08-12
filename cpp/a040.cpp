#include <iostream>
#include <cmath>
using namespace std;

bool arm(int n){
	int k=0,sum=0,i;
	i=n;
	while(i>0){
		i/=10;
		k++;
	}
	i=n;
	while(i>0){
		sum+=int(pow(i%10,k));
		i/=10;
	}
	if(sum==n)
		return true;
	else
		return false;
}

int main(){
	int m,n;
	bool find;
	while(cin >> m >> n){
		find=false;
		for(int i=m;i<=n;++i){
			if(arm(i)){
				find=true;
				cout << i << ' ';
			}
		}
		if(!find)
			cout << "none";
		cout << endl;
	}
	return 0;
}
