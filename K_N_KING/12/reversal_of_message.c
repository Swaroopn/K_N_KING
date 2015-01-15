/*******************************
 * PROGRAM NAME:    reverse.c  *
 * PAGE NUMBER:           275  *
 * AUTHOR:            SWAROOP  *
 *******************************/

#include <stdio.h>

#define SIZE 10

int main(void)
{
    char message[50];
    int c, i = 0, j;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        message[i] = c;
        i++;
    }
    message[i] = '\0';
    printf("Reversal is: ");
    for (j = i - 1; j >= 0; j--)
        printf("%c", message[j]);
    printf("\n");

    return 0;
}
