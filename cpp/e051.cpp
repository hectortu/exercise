#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main(){
  char s[1000];
  char c,i;
  while(true){
    i=0;
    while((c=getchar())!='\n')
      s[i++]=c;
    s[i]='\0';
    for(int i=1;i<strlen(s)-1;++i)
      s[i]='_';
    printf("%s\n",s);
  }
  return 0;
}
