#include <stdio.h>

int main(){
    int i;
    for (i = 1;i <=30/2;++i){
        int j = 30 - i;
        if(i*j == 221){
            printf("%d,%d\n",i,j);
        }
    }
    return 0;
}
