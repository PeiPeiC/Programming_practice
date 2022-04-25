#include <stdio.h>

int main(){
    int n,k,i;
    printf("N =");
    scanf("%d",&n);
    k=1;

    for(i=0;i<=n;i++){
        if(i>0) {
           k=k*2;
        }
        printf("%d\n",k);
    }
return 0;
}
