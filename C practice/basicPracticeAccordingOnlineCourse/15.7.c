#include <stdio.h>
int max10(int n[10]);
int avg10(int n[10]);

int main(){
    int i,n[10];
    for(i = 1; i <= 10; i++){
        scanf("%d",&n[i-1]);
    }
    printf("Max: %d\n",max10(n));
    printf("Avg: %d\n",avg10(n));
    return 0;
}
int max10(int n[10]){
    int i,max = n[0];
    for(i = 1;i < 10;i++){
        if (n[i] > max){
            max = n[i];
        }
    }
    return max;
}
int avg10(int n[10]){
    int i,avg,sum = 0 ;
    for(i = 0 ; i < 10; i++){
        sum += n[i];
    }
    avg = sum /10;
}

