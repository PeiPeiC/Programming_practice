#include <stdio.h>
int max2(int,int);

int main(){
    int a,b;
    printf("Please enter the first integer: ");
    scanf("%d",&a);
    printf("Please enter the second integer: ");
    scanf("%d",&b);
    printf("The maximum is %d.\n",max2(a,b));
    return 0;
}
 int max2(int a,int b)
    int max;
    if(a >= b){
        return a;
    }else{
        return b;
    }
    return max;
