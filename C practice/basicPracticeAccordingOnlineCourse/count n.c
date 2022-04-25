#include <stdio.h>
int main(){
    int N;
    printf("Please enter the number:  ");
    scanf("%d",N);
    int count = 1;
    while (count<=N){
        printf("%d\n",count);
        count = count + 1;
    }




    return 0;
}
