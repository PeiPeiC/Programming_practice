#include <stdio.h>
int f(int n);
int main(){
    int n;
    printf("N =");
    scanf("%d",&n);
    f(n);

return 0;
}
 int f(int n ){
    if(n==0){
    printf("%d\n",1);
    return 1;
    }
    int num =f(n-1)*2;
    printf("%d\n",num);
    return num;

    }
