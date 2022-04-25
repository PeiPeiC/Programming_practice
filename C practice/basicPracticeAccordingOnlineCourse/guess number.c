#include <stdio.h>
int main(){
    int answer = 4;
    int guess;
    int count;
        do{
        printf("Please enter your guess:  ");
        scanf("%d",&guess);
        count = count + 1;
        if(guess > answer){
            printf("Too large1!Tty again\n");
        }else if (guess < answer)
            printf("Too small!Try again\n");
        }while(count == 0 || guess != answer);
    printf("Bingo!\n You have guessed %d times \n",count);
    return 0;
}
