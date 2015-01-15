/*******************************
 * PROGRAM NAME:   length2.c   *
 * PAGE NUMBER:          142   *
 * AUTHOR:           SWAROOP   *
 *******************************/

#include <stdio.h>

int main(void)
{
    int len = 0;

    printf("Enter a message: ");

    while (getchar() != '\n')
        len++;
        
    printf("\nYour message was %d character(s) long.\n", len);

    return 0;
}
