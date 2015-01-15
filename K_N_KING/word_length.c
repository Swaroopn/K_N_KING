/*****************************************
 * PROGRAM NAME:  average_word_length.c  *
 * PAGE NUMBER:                     158  *
 * AUTHOR:                      SWAROOP  *
 *****************************************/

#include <stdio.h>

int main(void)
{
    int ch;
    float words = 0, chars = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            words++;
        else
            chars++;
    }
    printf("Average word length: %.1f", chars/(words+1));

    return 0;
}
