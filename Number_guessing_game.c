#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses;
    int answer;

    srand(time(0)); //uses the current time as a seed

    answer = (rand() % MAX) + MIN; //generate a random number between MIN & MAX

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("too low!\n");
        }
        else
        {
          printf("\t\tCorrect!\n");  
        }
        guesses++;
    }while(guess != answer);

        printf("\t\tResults \n");
        printf("Answer: %d\n", answer);
        printf("Guesses: %d\n", guesses);

        printf("\t\tWant to play again? Run the program again :)");
        
    return 0;
}