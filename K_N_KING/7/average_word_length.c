/*****************************************
 * PROGRAM NAME:  average_word_length.c  *
 * PAGE NUMBER:                     159  *
 * AUTHOR:                      SWAROOP  *
 *****************************************/

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int ch, state = OUT;
    float words = 0, chars = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ' || ch == '\t')
        {
            state = OUT;
            continue;
        }
        chars++;
        if (state == OUT)
        {
            state = IN;
            ++words;
        }
    }
    printf("Average word length: %.1f\n", chars/(words));

    return 0;
}

