#include <stdio.h>

int main(){
  char s[1001],c;
  int cnt[26],odd,i,len;
  while(1){
    for(i=0;i<26;++i)
      cnt[i]=0;
    i=0;
    while((c=getchar())!='\n' && c!=EOF)
      s[i++]=c;
    if(i==0)
      break;
    len=i;
    for(int i=0;i<len;++i)
      if(s[i]>=65 && s[i]<=90)
	cnt[s[i]-65]++;
      else if(s[i]>=97 && s[i]<=122)
	cnt[s[i]-97]++;
    odd=0;
    for(i=0;i<26;++i)
      if(cnt[i]%2==1)
	odd++;
    if(odd>1)
      printf("no...");
    else
      printf("yes !");
    printf("\n");
  }
  return 0;
}
