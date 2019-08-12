#include <iostream>
using namespace std;

int main(){
  int c[4];
  int g[4][2];
  int n;
  while(cin >> c[0] >> c[1] >> c[2] >> c[3]){
    cin >> n;
    while(n--){
      for(int i=0;i<4;++i){
	cin >> g[i][0];
	if(g[i][0]==c[i])
	  g[i][1]=1;
      
