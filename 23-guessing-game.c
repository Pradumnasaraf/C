#include<stdio.h>

int main()
{
    int secretNumber =7;
    int guess;
    int guessLimitCounter =1;
    int totalGuesss =3;

    while(guessLimitCounter<=totalGuesss){

        printf("Enter the %d guess: ", guessLimitCounter);
        scanf("%d",&guess);
        if (secretNumber==guess){
            printf("You Win, the secret number is %d\n", secretNumber);
            break;
        }
        guessLimitCounter++;
        if(guessLimitCounter>totalGuesss){
            printf("You lost\n");
        }
    }
}
    

