/***************************
 * PROGRAM NAME:  guess.c  *
 * PAGE NUMBER        214  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* external variable */
int secret_number;

/* prototypes */
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void)
{
    char command;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);

    initialize_number_generator();
    do {
        choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses();
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');

    return 0;
}

/***********************************
 *  Initialize the random number   *
 * generator using the time of day.*
 ***********************************/
void initialize_number_generator(void)
{
    srand((unsigned) time (NULL));
}

/************************************
 * Randomly select a number between *
 * 1 and MAX_NUMBER and store it in *
 * the secret_number.               *
 ************************************/
void choose_new_secret_number(void)
{
    secret_number = rand() % MAX_NUMBER + 1;
}

/**************************************
 * Repeatedly read user guesses and   *
 * tell the user whether each guess   *
 * is too low, too high, or correct.  *
 * When guess is correct, print the   *
 * total number of guesses and return *
 **************************************/
void read_guesses(void)
{
    int guess, num_guesses = 0;

    for (;;)
    {
        num_guesses++;
        printf("Etner guess: ");
        scanf("%d", &guess);
        if (guess == secret_number)
        {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        }
        else if (guess < secret_number)
            printf("Too low; try again.\n");
        else
            printf("Too high;, try again.\n");
    }
}
