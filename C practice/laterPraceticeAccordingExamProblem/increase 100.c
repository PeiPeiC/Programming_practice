#include <stdio.h>
int main(){
    int a []={1,2,3,4};
    int*p = a;
    *(p++)+=100;
    *(++p)+=100;
    for(int i=0;i<4;i++)printf("%d ",a[i]);

return 0;
}
