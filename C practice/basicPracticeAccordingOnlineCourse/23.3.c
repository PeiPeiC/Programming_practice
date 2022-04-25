#include <stdio.h>
int main(){
    int v[5] ={1,2,3,4,5};
    int *n =v;//int *n = & v[0]
    while(n!=v+5){
        printf("%d\n",*n++);
    }
 return 0;
}
