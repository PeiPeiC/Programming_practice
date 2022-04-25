#include <stdio.h>
int main(){
    char ch;

    while (1){
    scanf("%c",&ch);
        if(ch=='!') {
        break;
        }
        if (ch <= 90){
                ch = ch +32;
            }else{
                ch=ch-32;
            }
    printf("%c\n",ch);
    }

return 0;
}
