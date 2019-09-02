#include <cstdio>
using namespace std;

int main(){
    int n,i,j;
    char c;
    while(scanf("%d",&n)!=EOF){
        getchar();
        putchar(getchar());
        for(i=0;i<n-1;++i){
            for(j=0;j<n;++j)
                getchar();
            putchar(getchar());
        } 
    }
    return 0;
}
