/****************************
 * PROGRAM NAME:  vowels.c  *
 * PAGE NUMBER:         97  *
 * AUTHOR:         SWAROOP  *
 ****************************/

#include <stdio.h>

int main(void)
{
    int ch, count = 0, count1 = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':   count++;
                      break;
            default:    count1++;
                      break;
        }
    }

        printf("Your sentence contains %d Vowels, %d other character(s).\n", count, count1);

    return 0;
}
