#include <stdio.h>

int main(){
    int integer,sum;
    printf("Please enter integer: ");
    scanf("%d",&integer);
    sum = integer;
    while(integer!=0){
    printf("Please enter integer: ");
    scanf("%d",&integer);
    sum = sum + integer;
    if(integer == 0)
    break;
    }
    printf("Sum is %d.",sum);
return 0;
}
