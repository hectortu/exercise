#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void transpose(vector<vector<int>>mat,int m,int n){
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      cout << mat[j][i] << ((j==m-1)?'\n':' ');
}

int main() {
  string input;
  stringstream ss;
  string s;
  int m,n;
  vector<vector<int>>mat;
  
  getline(cin,input);
  while(!input.empty()){
    ss.str("");
    ss.clear();
    ss << input;
    ss >> m >> n;
    mat.clear();
    mat.assign(m,vector<int>(n,0));
    for(int i=0;i<m;++i){
      ss.str("");
      ss.clear();
      getline(cin,input);
      ss << input;
      for(int j=0;j<n;++j)
	ss >> mat[i][j];
    }
    transpose(mat,m,n);
    getline(cin,input);
  }
  return 0;
}
