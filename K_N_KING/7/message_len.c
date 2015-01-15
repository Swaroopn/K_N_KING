/*******************************
 * PROGRAM NAME:    length.c   *
 * PAGE NUMBER:          142   *
 * AUTHOR:           SWAROOP   *
 *******************************/

#include <stdio.h>

int main(void)
{
    int ch, len = 0;

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n')
    {
        len++;
        // putchar(ch);
    }
    printf("\nYour message was %d character(s) long.\n", len);

    return 0;
}
