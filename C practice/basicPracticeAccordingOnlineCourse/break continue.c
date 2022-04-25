#include <stdio.h>

int main(){
    int max;
    printf("Max= ");
    scanf("%d",& max);

    int number;
    for (number = max; number >= 1;--number){
        if (number%3 == 2 && number % 5 == 3 && number % 7 == 2){
            break;
        }
    }
    printf("%d\n", number);
    return 0;
}
