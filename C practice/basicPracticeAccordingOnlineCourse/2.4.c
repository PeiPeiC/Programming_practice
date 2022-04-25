#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("please enter first integer: ");
    scanf("%d",&n1);
    printf("please enter second integer: ");
    scanf("%d",&n2);
    printf("please enter third integer: ");
    scanf("%d",&n3);
    double average=(n1+n2+n3)/(double)3;
    printf("average = %f.",average);
return 0;
}
