/*******************************************
 * PROGRAM NAME:    reverse_of_sentence.c  *
 * PAGE NUMBER:                       180  *
 * AUTHOR:                        SWAROOP  *
 *******************************************/

#include <stdio.h>

#define SIZE 50

int main(void)
{
    char message[SIZE], reverse[SIZE], punct;
    int c, i = 0, j ,k, l=0, flag;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        message[i] = c;
        i++;
    }

    if (ispunct(message[i-1]))
    {
        flag = 1;
        punct = message[i-1];
        i = i - 1;
    }
    message[i] = '\0';

    j = i - 1;

    while (j >= 0)
    {
        if (message[j] == ' ')
        {
            for (k = j+1; k < i; k++)
            {
                printf("%c", message[k]);
            }
            printf(" ");
            message[j] = '\0';
            i = j;
            j--;
        }
        else
            j--;
    }

    for (j = 0; j < i; j++)
        printf("%c", message[j]);

    /* print if last char is punctuation */
    if (flag == 1)
        printf("%c", punct);
	printf("\n");
    return 0;
}
