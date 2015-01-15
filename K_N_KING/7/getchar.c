/*******************************
 * PROGRAM NAME:   getchar.c   *
 * PAGE NUMBER:          141   *
 * AUTHOR:           SWAROOP   *
 *******************************/

#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n')
    {
        putchar(ch);
    }

    return 0;
}
