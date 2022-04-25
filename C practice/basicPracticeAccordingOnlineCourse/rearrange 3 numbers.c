#include <stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    printf("Before: %d%d%d\n",a,b,c);
    t=a;
    a=c;
    c=t;

    t=b;
    b=c;
    c=t;
    printf("After: %d%d%d\n",a,b,c);
    return 0;
}
