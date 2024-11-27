#include <stdio.h>
#include <stdbool.h>
#include <conio.h>  
#include <stdlib.h>  

int main()
{
    int lucky , guesses = 0 , guess , h_or_l;
    lucky = rand() % 100 + 1;
    //high is 0 and low is 1
    while(true)
    {
        printf("Input a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess == lucky)
        {
            printf("Congrats you guessed the number!\n");
            guesses++;
            break;
        }
        else
        {
            h_or_l = guess>lucky ? 0 : 1;
            if(h_or_l == 0)
                printf("Your guess is too high!\n");
            if(h_or_l == 1)
                printf("Your guess is too low!\n"); 
        }

        guesses++;
    }
    printf("You guesses in %d attemps",guesses);
}